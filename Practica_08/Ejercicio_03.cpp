// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> GenerarCalificaciones(int n);
void MostrarCalificaciones(vector<int> calificaciones);
void CalcularPorcentajes(vector<int> calificaciones);

int main() {
    srand(time(NULL));
    system("chcp 65001");
    system("cls");
    int n;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    vector<int> calificaciones = GenerarCalificaciones(n);

    MostrarCalificaciones(calificaciones);
    CalcularPorcentajes(calificaciones);

    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

vector<int> GenerarCalificaciones(int n)
{
    vector<int> calificaciones;
    for (int i = 0; i < n ; i++)
    {
        calificaciones.push_back(GenerarAleatorio(0,100));
    }
    return calificaciones;
}

void MostrarCalificaciones(vector<int> calificaciones)
{
    cout << "\nCalificaciones: ";
    for (int i = 0; i < calificaciones.size(); i++) 
    {
        cout << calificaciones[i] << "\t";
    }
    cout << endl;
}

void CalcularPorcentajes(vector<int> calificaciones)
{
    int reprobados = 0, regulares = 0, buenos = 0, excelentes = 0;

    for (int i = 0; i < calificaciones.size(); i++)
    {
        int nota = calificaciones[i];
        if (nota >= 0 && nota <= 59)
        {
            reprobados++;
        }
        else if (nota >= 60 && nota <= 79)
        {
            regulares++;
        }
        else if (nota >= 80 && nota <= 89)
        {
            buenos++;
        }
        else if (nota >= 90 && nota <= 100) 
        {
            excelentes++;
        }
    }

    int total = calificaciones.size();
    cout << "\nReprobados: " << (reprobados * 100) / total << "%" << endl;
    cout << "Regulares: " << (regulares * 100) / total << "%" << endl;
    cout << "Buenos: " << (buenos * 100) / total << "%" << endl;
    cout << "Excelentes: " << (excelentes * 100) / total << "%" << endl;
}
