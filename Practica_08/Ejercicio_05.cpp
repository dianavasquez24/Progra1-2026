// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
using namespace std;

void ValidarCorreo(string correo);

int main() {
    system("chcp 65001");
    system("cls");
    string correo;

    cout << "Ingrese un correo electronico: ";
    getline(cin, correo);

    ValidarCorreo(correo);

    return 0;
}

void ValidarCorreo(string correo)
{
    int contadorArroba = 0;
    bool puntoDespuesArroba = false;

    for (int i = 0; i < correo.length(); i++)   // Se recorre letra por letra
    {
        char letra = correo[i];
        if (letra == '@')
        {
            contadorArroba++;

            for (int j = i + 1; j < correo.length(); j++)
            {
                if (correo[j] == '.')    // Revisa si despues hay un punto
                {
                    puntoDespuesArroba = true;
                }
            }
        }
    }

    if (contadorArroba == 1 && puntoDespuesArroba)
    {
        cout << "Correo electronico valido" << endl;
    } 
    else
    {
        cout << "Correo electronico no valido" << endl;
    }
}
