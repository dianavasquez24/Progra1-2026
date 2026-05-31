// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Fecha creación: 13/05/2026
// Número de ejercicio: 9

#include <iostream>
#include <string>
#include <fstream>
#include <vector>  

using namespace std;

void CifrarArchivo(string NombreEntrada, string NombreSalida);

int main()
{
    system("chcp 65001");
    
    string NombreEntrada = "mensaje.txt";
    string NombreSalida = "mensaje_cifrado.txt";
    
    CifrarArchivo(NombreEntrada, NombreSalida);
    
    return 0;
}

void CifrarArchivo(string NombreEntrada, string NombreSalida)
{
    string lineaTexto;
    vector<string> listaMensajesCifrados; 

    ifstream archivoLectura;
    archivoLectura.open(NombreEntrada);

    if (archivoLectura.good())
    {
        cout << "--- LEYENDO Y CIFRANDO EL ARCHIVO ---" << endl;
        
        while (!archivoLectura.eof())
        {
            getline(archivoLectura, lineaTexto);
            
            if (lineaTexto.length() > 0)
            {
                string lineaCifrada = "";
                
                for (int i = 0; i < lineaTexto.length(); i++)
                {
                    char letraOriginal = lineaTexto[i];
                    char letraNueva;
                    
                    if (letraOriginal != ' ')
                    {
                        letraNueva = letraOriginal + 3; //cifrado cesar (+3)
                    }
                    else
                    {
                        letraNueva = ' '; //mantenemos espacio en blanco
                    }
                    
                    lineaCifrada = lineaCifrada + letraNueva;
                }
                
                listaMensajesCifrados.push_back(lineaCifrada);
                cout << "[Cifrado con éxito]: " << endl;
            }
        }
    }
    else
    {
        cout << "Error: No se pudo abrir el archivo de lectura." << endl;
        return;
    }
    
    archivoLectura.close(); 

    //ESCRITURA

    ofstream archivoEscritura;
    archivoEscritura.open(NombreSalida);

    if (archivoEscritura.good())
    {
        cout << "\n--- GUARDANDO MENSAJE CIFRADO EN EL ARCHIVO ---" << endl;
        
        for (int i = 0; i < listaMensajesCifrados.size(); i++)
        {
            archivoEscritura << listaMensajesCifrados[i] << endl;
            cout << "[Guardado exitoso] " << endl;
        }
        
        cout << "----------------------------------------" << endl;
        cout << "Archivo '" << NombreSalida << "' generado correctamente." << endl;
        cout << endl;
    }
    else
    {
        cout << "Error: No se pudo crear el archivo de salida." << endl;
    }

    archivoEscritura.close(); 
}