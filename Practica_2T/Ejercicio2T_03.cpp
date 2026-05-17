// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez. 
// Fecha creación: 11/05/2026

#include <iostream>
#include <string>
using namespace std;

void Palindromo(string oracion );

int main ()
{
    system ("cls");

    string oracion;
    cout << "Ingrese una oracion y se verificara si es un palindromo : " << endl;
    getline(cin,oracion);

    Palindromo(oracion);
    
    return 0 ;
}
void Palindromo(string oracion )
{
    string limpio = "";
    bool esPalindromo = false; 
    for (int i = 0; i < oracion.size(); i++)
    {
        char letra = oracion [i];
        if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z') )
        {
            if (letra >= 'A' && letra <= 'Z')      
            {
                letra = letra + 32; // convertir a minuscula
            }
            limpio += letra;
        }
    }
    
    for (int i = 0; i < limpio.size(); i++)
    {
        for (int j = limpio.size()-1; j >= 0; j--)
        {
            if (limpio [i] == limpio[j])
            {
                esPalindromo = true ;
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