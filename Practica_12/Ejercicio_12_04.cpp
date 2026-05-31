// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void BuscarEnArchivo(string NombreArchivo);

int main()
{
    string NombreArchivo = "datos.txt";
    
    BuscarEnArchivo(NombreArchivo);
    
    return 0;
}

void BuscarEnArchivo(string NombreArchivo)
{
    ifstream archivo1;
    string lineaTexto;
    string buscarPalabra;
    int contador = 0;

    archivo1.open(NombreArchivo);  //Primero mostrar el texto

    if (archivo1.good())
    {
        cout << "--- CONTENIDO DEL ARCHIVO ---" << endl;
        while (!archivo1.eof())
        {
            getline(archivo1, lineaTexto);
            cout << lineaTexto << endl;
        }
        cout << "-----------------------------" << endl << endl;
        
        archivo1.close(); 
    }
    else
    {
        cout << "No se puede abrir el archivo" << endl;
    }

    archivo1.open(NombreArchivo);     // Volvemos a abrir el archivo para que empiece a buscar desde la primera linea

    if (archivo1.good())
    {
        cout << "Busqueda de texto en un archivo "<< endl;
        cout << "Ingrese la palabra o frase que desea buscar: ";
        getline(cin, buscarPalabra);
        
        while (!archivo1.eof())
        {
            getline(archivo1, lineaTexto); 
            
            string::size_type posicion = lineaTexto.find(buscarPalabra, 0);
            
            while (posicion != string::npos) // Mientras la palabra sea encontrada
            {
                contador++;
                posicion = lineaTexto.find(buscarPalabra, posicion + 1); //  Avanzamos en la linea para ver si se repite la misma palabra
            }
        }
        
        cout << endl << "\tLa palabra o frase aparece " << contador << " veces" << endl;
    }

    archivo1.close(); // Cierre definitivo
}