// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib> // Obligatorio para usar atof

using namespace std;

void CalcularPromedios(string ArchivoEntrada, string ArchivoSalida);

int main()
{
    string ArchivoEntrada = "calificaciones.txt";
    string ArchivoSalida = "promedios.txt";

    CalcularPromedios(ArchivoEntrada, ArchivoSalida);
    
    return 0;
}

void CalcularPromedios(string ArchivoEntrada, string ArchivoSalida)
{
    vector<string> listaEstudiantes;
    vector<float> listaPromedios;
    
    string lineaTexto;

    ifstream archivoLectura;
    archivoLectura.open(ArchivoEntrada);

    if (archivoLectura.good())
    {
        cout << "----- CALIFICACIONES -----" << endl;
        
        while (!archivoLectura.eof())
        {
            getline(archivoLectura, lineaTexto);
            
            string::size_type esp1 = lineaTexto.find(" "); // buscamos el espacio que separa el nombre de la primera nota
            
            if (esp1 != string::npos)
            {
                string nombre = lineaTexto.substr(0, esp1); //extraemos el nombre
                
                //recortamos la linea para quedarnos solo con el resto (las notas)
                string resto = lineaTexto.substr(esp1 + 1); 

                string::size_type esp2 = resto.find(" ");   //buscamos el espacio despues de la nota 1
                float nota1 = atof(resto.substr(0, esp2).c_str());
                resto = resto.substr(esp2 + 1); //volvemos a recortar

                string::size_type esp3 = resto.find(" ");   // nota 2
                float nota2 = atof(resto.substr(0, esp3).c_str());
                resto = resto.substr(esp3 + 1);     //volvemos a recortar

                string::size_type esp4 = resto.find(" ");   // nota 3
                float nota3 = atof(resto.substr(0, esp4).c_str());
                
                float nota4 = atof(resto.substr(esp4 + 1).c_str());     //la nota 4 es el ultimo fragmento que queda de la linea

                float promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;     //calculamos el promedio de las 4 notas
                
                //guardamos los resultados en los vectores
                listaEstudiantes.push_back(nombre);
                listaPromedios.push_back(promedio);
                
                cout << nombre << "-----Promedio: " << promedio << endl;
            }
        }
        cout << "---------------------------------" << endl << endl;
    }
    else
    {
        cout << "Error: No se pudo abrir el archivo " << ArchivoEntrada << endl;
        return; 
    }
    
    archivoLectura.close();

// ESCRITURA archivo de salida
    ofstream archivoEscritura;
    archivoEscritura.open(ArchivoSalida);

    if (archivoEscritura.good())
    {
        cout << "--- GUARDANDO PROMEDIOS EN EL ARCHIVO ---" << endl;
        
        for (int i = 0; i < listaEstudiantes.size(); i++)
        {
            archivoEscritura << listaEstudiantes[i] << " " << listaPromedios[i] << endl;
            
            cout << "[Guardado exitoso] " << listaEstudiantes[i] << endl;
        }
        cout << "-----------------------------------------" << endl;
        cout << "Archivo '" << ArchivoSalida << "' generado correctamente." << endl;
    }
    else
    {
        cout << "Error: No se pudo crear el archivo de salida." << endl;
    }

    archivoEscritura.close();
}