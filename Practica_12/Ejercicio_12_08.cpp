// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void ContarElementos(string ArchivoEntrada);

int main()
{
    system("chcp 65001");
    
    string ArchivoEntrada = "documento.txt";
    
    ContarElementos(ArchivoEntrada);
    
    return 0;
}

void ContarElementos(string ArchivoEntrada)
{
    int totalLineas = 0;
    int totalPalabras = 0;
    int totalCaracteres = 0;
    
    string lineaTexto;

    ifstream archivoLectura;
    archivoLectura.open(ArchivoEntrada);

    if (archivoLectura.good())
    {
        while (!archivoLectura.eof())
        {
            getline(archivoLectura, lineaTexto);
            
            totalLineas++;
            
            if (lineaTexto.length() > 0)
            {
                
                for (int i = 0; i < lineaTexto.length(); i++) 
                {
                    char letra = lineaTexto[i];
                    
                    if (letra == ' ')
                    {
                        totalPalabras++;
                    }
                    else 
                    {
                        totalCaracteres++; 
                    }
                }
                
                totalPalabras++;
            }
        }
    }
    else
    {
        cout << "Error: No se pudo abrir el archivo " << ArchivoEntrada << endl;
        return;
    }

    archivoLectura.close();

    cout << "----------RESULTADOS de contador de líneas, palabras y caracteres en'" << ArchivoEntrada << "'----------" << endl;
    cout << endl;
    cout << "Total de lineas: " << totalLineas << endl;
    cout << "Total de palabras: " << totalPalabras << endl;
    cout << "Total de caracteres: " << totalCaracteres << endl;
    cout << endl;
}