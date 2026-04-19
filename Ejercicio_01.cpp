// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital 
// Fecha creación: 15/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> listaNombres = {"Ricardo", "Pablo", "Mariel", "Angela", "Marco", "Kevin", "Laura", "Diana", "Luis", "Alejandra"};
vector<string> listaApellidos = {"Aguilar", "Sanchez", "Rodriguez", "Figueroa", "Lanza", "Mamani", "Quispe", "Flores", "Rocha", "Terceros"};

int GenerarAleatorio(int LimInferior, int LimSuperior);
void generarNombres(int cantidadEstudiantes, vector<string> &nombresCompletos);
void generarNotas(int cantidadEstudiantes, vector<double> &notasFinales);
void procesarResultados(vector<string> &nombresCompletos, vector<double> &notasFinales, double &promedioClase, int &cantidadAprobados);
void mostrarResultados(vector<string> &nombresCompletos, vector<double> &notasFinales);

int main() {
    srand(time(NULL));
    system("chcp 65001");
    system ("cls");

    int cantidadEstudiantes;
    cout << "Ingrese la cantidad de estudiantes a generar: ";
    cin >> cantidadEstudiantes;

    vector<string> nombresCompletos(cantidadEstudiantes);
    vector<double> notasFinales(cantidadEstudiantes);

    generarNombres(cantidadEstudiantes, nombresCompletos);
    generarNotas(cantidadEstudiantes, notasFinales);

    mostrarResultados(nombresCompletos, notasFinales);

    double promedioClase = 0.0;
    int cantidadAprobados = 0;

    procesarResultados(nombresCompletos, notasFinales, promedioClase, cantidadAprobados);

    cout << "\nDATOS ACTUALIZADOS: " << endl;
    cout << endl ;
    mostrarResultados(nombresCompletos, notasFinales);

    cout << "------------------------------------------------------------------" << endl;
    cout << "\nPromedio general de la clase: " << promedioClase << endl;
    cout << "Cantidad de estudiantes aprobados: " << cantidadAprobados << endl;
    cout << endl;

    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}

void generarNombres(int cantidadEstudiantes, vector<string> &nombresCompletos)
{
    for (int i = 0; i < cantidadEstudiantes; i++)
    {
        nombresCompletos[i] = listaNombres[GenerarAleatorio(0, listaNombres.size() - 1)] + " " +listaApellidos[GenerarAleatorio(0, listaApellidos.size() - 1)] + " " + listaApellidos[GenerarAleatorio(0, listaApellidos.size() - 1)];
    }
}

void generarNotas(int cantidadEstudiantes, vector<double> &notasFinales)
{
    for (int i = 0; i < cantidadEstudiantes; i++)
    {
        notasFinales[i] = GenerarAleatorio(33, 100) * 1.0;
    }
}

void procesarResultados(vector<string> &nombresCompletos, vector<double> &notasFinales, double &promedioClase, int &cantidadAprobados)
{
    int totalEstudiantes = nombresCompletos.size();
    double sumaNotas = 0.0;

    for (int i = 0; i < totalEstudiantes; i++)
    {
        sumaNotas += notasFinales[i];
    }
    promedioClase = sumaNotas / totalEstudiantes;    // es promedio de notas originales

    for (int i = 0; i < totalEstudiantes; i++)
    {
        if (notasFinales[i] >= 45.0 && notasFinales[i] <= 50.0)
        {
            notasFinales[i] = 51.0;         // ajuste directo para notas menores a 51
        }
        if (notasFinales[i] >= 51.0)
        {
            cantidadAprobados++;
        }
    }
}

void mostrarResultados(vector<string> &nombresCompletos, vector<double> &notasFinales)
{
    int totalEstudiantes = nombresCompletos.size();
    cout << "Nombre completo y nota" << endl;
    cout << endl;
    for (int i = 0; i < totalEstudiantes; i++) {
        cout << "Nombre completo: " << nombresCompletos[i] << endl;
        cout << "Nota: " << notasFinales[i] << endl;
        cout << endl;
    }
}