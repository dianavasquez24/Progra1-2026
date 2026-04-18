// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
using namespace std;

void EsPalindromo(string texto);

int main() {
    system("cls");

    string texto;
    cout << "Ingrese un texto y se verificara si es un palindromo : " << endl;
    getline(cin, texto);

    EsPalindromo(texto);

    return 0;
}

void EsPalindromo(string texto)
{
    string limpio = "";
    bool esPalindromo = true; // asumimos que lo es

    for (int i = 0; i < texto.size(); i++)
    {
        char letra = texto[i];
        if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))  // tabla ASCII , mayusculas = 65 - 90 , minusculas = 97 -122
        {
            if (letra >= 'A' && letra <= 'Z')      
            {
                letra = letra + 32; // convertir a minuscula
            }
            limpio += letra;
        }
    }

    int n = limpio.size(); 

    for (int i = 0; i < n; i++) // Recorre desde el inicio
    {
        for (int j = n - 1 - i; j >= n - 1 - i; j--)  // recorre desde el final
        {
            if (limpio[i] != limpio[j])     //compara
            {
                esPalindromo = false; // marca que no es palindromo
            }
        }
    }

    if (esPalindromo)
    {
        cout << "Es palindromo" << endl;
    }
    else
    {
        cout << "No es palindromo" << endl;
    }
}
