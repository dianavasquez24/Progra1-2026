// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 1


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void EscribirArchivo(string NombreArchivo);
void LeerArchivo(string NombreArchivo);

int main()
{
    string NombreArchivo;

    NombreArchivo = "nombres"; 
    NombreArchivo = NombreArchivo + ".txt";

    EscribirArchivo(NombreArchivo);
    cout << "\nLista de nombres:" << endl;
    LeerArchivo(NombreArchivo);
    

    return 0;
}

void EscribirArchivo(string NombreArchivo)
{
    // ESCRIBIR ARCHIVO

    // 1. Abrir Archivo
    ofstream archivo;
    archivo.open(NombreArchivo, ios::app);

    // 2. Realizar Operaciones
    int cantidad;
    string nombre;
    
    cout << "Numero de nombres que desea agregar: ";
    cin >> cantidad;
    cin.ignore(); //limpia el buffer... No olvidar
    
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        getline(cin, nombre);
        archivo << nombre << endl;      //guarda el nombre en el archivo
    }

    // 3. Cerrar Archivo
    archivo.close();
}

void LeerArchivo(string NombreArchivo)
{
    // LEER ARCHIVO
    // 1. Abrir el archivo
    ifstream archivo1; // Lectura
    archivo1.open(NombreArchivo);

    // 2. Operaciones
    string lineaTexto;

    if (archivo1.good())
    {
        while (!archivo1.eof())
        {
            getline(archivo1, lineaTexto); // Lee una linea de texto del archivo
            cout << "\t" << lineaTexto << endl;
        }
    }
    else
    {
        cout << "No se puede abrir el archivo" << endl;
    }

    // 3. Cerrar archivo
    archivo1.close();
}