// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026

#include <iostream>

using namespace std;

int Potencia (int numero , int exponente);

int main()
{
    system("cls");
    int numero = 0 , exponente = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Ingresar el exponente del numero: ";
    cin >> exponente;

    cout << "El resultado de " << numero << "^" <<exponente << "= " << Potencia (numero,exponente);

    return 0;
}

int Potencia (int numero , int exponente)
{
    if (exponente == 0)
    {
        return 1;
    } 
    else
    {
        return numero * ( Potencia (numero, exponente -1));
    }
    
}