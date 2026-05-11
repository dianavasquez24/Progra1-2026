// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026

#include <iostream>

using namespace std;
int Ullman (int numero);

int main()
{
    int numero = 0 , exponente = 0;
    system("cls");
    cout << "Ingresar numero: " ;
    cin >> numero;

    cout << numero << "\t";
    cout << Ullman (numero);
    return 0;
}
int Ullman (int numero)
{
    if (numero == 1)
    {
        return 1;
    }
    if (numero % 2 == 0 )
    {
        cout << numero / 2 << "\t";
        return Ullman (numero / 2);
    }
    else
    {
        cout << numero * 3 + 1 << "\t";
        return Ullman ( numero * 3 + 1 );
    }
}