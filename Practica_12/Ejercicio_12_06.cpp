// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <fstream>
#include <vector> 
#include <cstdlib> // Para usar atof

using namespace std;

void ProcesarRegistros(string ArchivoEntrada, string ArchivoSalida);

int main()
{
    string ArchivoEntrada = "temperaturas.txt";
    string ArchivoSalida = "altas_temperaturas.txt";
    
    ProcesarRegistros(ArchivoEntrada, ArchivoSalida);
    
    return 0;
}

void ProcesarRegistros(string ArchivoEntrada, string ArchivoSalida)
{
    vector<string> listaCiudades;
    vector<float> listaTemperaturas;

    string lineaTexto;

    ifstream archivoLectura;
    archivoLectura.open(ArchivoEntrada);

    if (archivoLectura.good())
    {
        cout << "---DATOS DEL ARCHIVO ---" << endl;
        
       while (!archivoLectura.eof()) 
        {
            getline(archivoLectura, lineaTexto);
            
            string::size_type espacio = lineaTexto.find(" ");  // Encontramos el espacio que separa la ciudad de la temperatura
            
            if (espacio != string::npos)
            {
                string ciudad = lineaTexto.substr(0, espacio); // Cortamos desde el inicio (0) hasta donde esta el espacio
                
                string textoTemperatura = lineaTexto.substr(espacio + 1);// Cortamos desde el espacio + 1 hasta el final
                
                /*atof: Es una función que convierte un texto con números (como "32.5") en un número decimal matemático real (32.5) para poder hacer operaciones.
                .c_str(): Es un truco obligatorio que transforma un string moderno de C++ en el formato de texto antiguo que atof necesita para poder trabajar*/

                float tempConvertida = atof(textoTemperatura.c_str()); // Convertimos a float y guardamos en los vectores
                
                listaCiudades.push_back(ciudad);
                listaTemperaturas.push_back(tempConvertida);
                
                cout << ciudad << " " << tempConvertida << endl;
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



    float limiteN;
    cout << "Ingrese la temperatura limite (N gradosC): ";
    cin >> limiteN;

    ofstream archivoEscritura;
    archivoEscritura.open(ArchivoSalida); 

    if (archivoEscritura.good())
    {
        cout << "\n--FILTRANDO Y GUARDANDO ALTAS TEMPERATURAS ---" << endl;
        
        for (int i = 0; i < listaCiudades.size(); i++)
        {
            if (listaTemperaturas[i] > limiteN)
            {
                archivoEscritura << listaCiudades[i] << " " << listaTemperaturas[i] << endl;
                
                cout << "[Guardado] " << listaCiudades[i] << " con " << listaTemperaturas[i] << " gradosC" << endl;
            }
        }
        cout << "------------------------------------------------" << endl;
        cout << "Archivo '" << ArchivoSalida << "' generado exitosamente." << endl;
    }
    else
    {
        cout << "Error: No se pudo crear el archivo de salida." << endl;
    }

    archivoEscritura.close(); 
}