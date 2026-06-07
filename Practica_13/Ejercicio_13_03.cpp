// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>
#include <vector> 

using namespace std;

struct Estudiante 
{
    long int cedula;
    char nombre[30];
    char apellido[30];
    int edad;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[50]; 
    long int telefono;
};

Estudiante CrearEstudiante();
vector<Estudiante> IngresarEstudiantes(int n);
void MostrarListaEstudiantes(vector<Estudiante> listaEstudiantes);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Estudiante> listaEstudiantes;

    cout << "REGISTRO DE ESTUDIANTES" << endl;
    cout << "=======================" << endl;
    
    cout << "Ingrese la cantidad de estudiantes a registrar: ";
    cin >> n;
    cin.ignore();

    listaEstudiantes = IngresarEstudiantes(n);

    MostrarListaEstudiantes(listaEstudiantes);

    return 0;
}

Estudiante CrearEstudiante()
{
    Estudiante estudiante;
    
    cout << "Ingrese la cedula de identidad: ";
    cin >> estudiante.cedula;
    cin.ignore(); 

    cout << "Ingrese el nombre: ";
    cin.getline(estudiante.nombre, 30);

    cout << "Ingrese el apellido: ";
    cin.getline(estudiante.apellido, 30);

    cout << "Ingrese la edad: ";
    cin >> estudiante.edad;
    cin.ignore();

    cout << "Ingrese la profesion: ";
    cin.getline(estudiante.profesion, 30);

    cout << "Ingrese el lugar de nacimiento: ";
    cin.getline(estudiante.lugar_nacimiento, 30);

    cout << "Ingrese la dirección: ";
    cin.getline(estudiante.direccion, 50);

    cout << "Ingrese el telefono: ";
    cin >> estudiante.telefono;
    cin.ignore(); 

    return estudiante;
}

vector<Estudiante> IngresarEstudiantes(int n)
{
    vector<Estudiante> estudiantes;
    Estudiante estudiante; 
    for (int i = 1; i <= n; i++)
    {
        cout << "\nESTUDIANTE " << i << endl;
        cout << "=========" << endl;
        estudiante = CrearEstudiante();
        estudiantes.push_back(estudiante);
    }
    return estudiantes;
}

void MostrarListaEstudiantes(vector<Estudiante> listaEstudiantes)
{
    cout << "\n==================================================" << endl;
    cout << "           LISTA DE ESTUDIANTES REGISTRADOS          " << endl;
    cout << "==================================================" << endl;

    for (int i = 0; i < listaEstudiantes.size(); i++)
    {
        cout << "ESTUDIANTE  " << i + 1  << ":"<< endl;
        cout << "\tCI: " << listaEstudiantes[i].cedula << endl;
        cout << "\tNombre: " << listaEstudiantes[i].nombre << endl;
        cout << "\tApellido: " << listaEstudiantes[i].apellido << endl;
        cout << "\tEdad: " << listaEstudiantes[i].edad << " años" << endl;
        cout << "\tProfesion: " << listaEstudiantes[i].profesion << endl;
        cout << "\tLugar de nacimiento: " << listaEstudiantes[i].lugar_nacimiento << endl;
        cout << "\tDirección: " << listaEstudiantes[i].direccion << endl;
        cout << "\tTelefono: " << listaEstudiantes[i].telefono << endl;
        cout << "----------------------------------------------" << endl;
    }
}