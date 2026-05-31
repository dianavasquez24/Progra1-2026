// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void EscribirTexto(string NombreArchivo);
void ContarPalabrasArchivo(string NombreArchivo);

int main()
{
    string NombreArchivo = "texto.txt";

    cout << "Contador de palabras en el archivo texto.txt: " << endl;

    ContarPalabrasArchivo(NombreArchivo);
    
    return 0;
}

void ContarPalabrasArchivo(string NombreArchivo)
{
    ifstream archivo1; 
    archivo1.open(NombreArchivo);

    string lineaTexto;
    int contador = 0;

    if (archivo1.good())
    {
        while (!archivo1.eof())
        {
            getline(archivo1, lineaTexto); // Lee una linea completa

            for (int i = 0; i < lineaTexto.length(); i++) //// Recorremos la linea posicion por posicion directamente con  for
                {
                    char letra = lineaTexto[i]; // Capturamos el caracter actual
                    
                    // Preguntamos si es un espacio en blanco
                    if (letra == ' ')
                    {
                        contador++; // Si es espacio,termina una palabra
                    }
                }
                
                // Sumamos 1 al final de la linea, porque la ultima palabra no tiene espacio despues
                contador++; 
            }
            cout << "\tEl archivo texto.txt contiene " << contador << " palabras" << endl;
    }
    else
    {
        cout << "No se puede abrir el archivo" << endl;
    }

    archivo1.close();
}