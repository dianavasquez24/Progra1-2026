// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026

#include <iostream>

using namespace std;

int SumaDigRec(int numero);
int main()
{
    int numero = 0 ;
    system("cls");
    cout << "Ingresar numero: " ;
    cin >> numero;

    cout << "La suma de los digitos del numero es : " << SumaDigRec(numero);
    return 0;
}

int SumaDigRec(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    else
    {
        return (numero % 10) + SumaDigRec (numero/10);
    }  
}