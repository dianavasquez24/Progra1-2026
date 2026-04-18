// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
using namespace std;

void MayusculasPrimero (string texto);

int main() {
    system("cls");

    string texto;
    cout << "Ingrese una texto: ";
    getline(cin, texto);

    MayusculasPrimero (texto);

    return 0;
}

void MayusculasPrimero (string texto)
{
    string resultado = "";
    for (int i = 0; i < texto.size(); i++)
    {
        char letra = texto[i];
        
        if (letra >= 'A' && letra <= 'Z') // ASCII   A = 65    a = 97 
        {
            letra = letra + 32;            // primero cambiamos todo a minusculas
        }

        if (i == 0 || texto[i-1] == ' ')  // inicio de plabra  o un espacio antes cambiar a mayuscula
        {
            if (letra >= 'a' && letra <= 'z')
            {
                letra = letra - 32;     // ASCII   a = 97    A = 65
            }
        }

        resultado += letra;
    }

    cout << "Resultado: \n" << resultado << endl;
}
