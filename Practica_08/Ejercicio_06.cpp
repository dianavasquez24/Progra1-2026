// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void InvertirOracion( string oracion );

int main() {
    system ("chcp 65001");
    system("cls");
    string oracion;

    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    InvertirOracion(oracion);

    return 0;
}

void InvertirOracion(string oracion)
{
    vector<string> palabras;
    string palabra = "";

    for (int i = 0; i < oracion.size(); i++)
    {
        char letra = oracion[i];

        if (letra != ' ')
        {
            palabra += letra; // va construyendo la palabra 
        }
        else
        {
            if (palabra != "")  // cuando se encuentra un espacio se guarda la palabra
            {
                palabras.push_back(palabra);
                palabra = ""; // reinicia para la siguiente palabra
            }
        }
    }

    if (palabra != "")    // verifica que la ultima letra ya que como no tiene espacio no se agrego al vector 
    {                     // si hay algo guardado en la variable palabra
        palabras.push_back(palabra);
    }

    cout << "Oracion invertida: ";
    for (int i = palabras.size() - 1; i >= 0; i--)  // inicia en la ultima palabra 
    {
        cout << palabras[i] << " ";
    }
    cout << endl;
}