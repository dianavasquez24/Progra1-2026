// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <string>
#include <fstream> // Libreria para manejar archivos

using namespace std;

void EscribirEstudiantes(string NombreArchivo);
void LeerEstudiantes(string NombreArchivo);

int main()
{
    string NombreArchivo;

    NombreArchivo = "estudiantes"; 
    NombreArchivo = NombreArchivo + ".txt";
    
    EscribirEstudiantes(NombreArchivo);
    
    cout << "\nInformacion de los estudiantes:" << endl;
    cout << endl;
    LeerEstudiantes(NombreArchivo);
    
    return 0;
}

void EscribirEstudiantes(string NombreArchivo)
{
    ofstream archivo;
    archivo.open(NombreArchivo, ios::app);

    int cantidad;
    string nombre;
    int edad;
    float promedio;

    cout << "Ingrese cantidad de estudiantes que desea ingresar: ";
    cin >> cantidad;
    cin.ignore();

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nEstudiante " << ":" << endl;
        
        cout << "Nombre: ";
        getline(cin, nombre);
        
        cout << "Edad: ";
        cin >> edad;
        
        cout << "Promedio: ";
        cin >> promedio;
        cin.ignore();

        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
        archivo << endl;
    }
    archivo.close();
}
void LeerEstudiantes(string NombreArchivo)
{
    ifstream archivo1;
    archivo1.open(NombreArchivo);

    string lineaTexto;

    if (archivo1.good())
    {
        while (!archivo1.eof())
        {
            getline(archivo1, lineaTexto); 
            cout << "\t" <<lineaTexto << endl;    
        }
    }
    else
    {
        cout << "No se puede abrir el archivo" << endl;
    }

    archivo1.close();
}
