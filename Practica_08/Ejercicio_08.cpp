// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void DividirOracion (string texto, char delimitador);

int main() {
    system("cls");

    string texto;
    char delimitador;

    cout << "Ingrese una texto: ";
    getline(cin, texto);

    cout << "Ingrese el delimitador: ";
    cin >> delimitador;

    DividirOracion(texto, delimitador);

    return 0;
}

void DividirOracion (string texto, char delimitador)
{
    vector<string> tokens;
    string palabra = "";

    for (int i = 0; i < texto.size(); i++)
    {
        char letra = texto[i];
        if (letra != delimitador)
        {
            palabra += letra; // acumula
        }
        else
        {
            if (palabra != "")
            {
                tokens.push_back(palabra);
                palabra = ""; // reinicia
            }
        }
    }

    if (palabra != "")
    {
        tokens.push_back(palabra);  //// guarda la ultima palabra
    }

    cout << "Tokens:" << endl;
    for (int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << endl;
    }
}
