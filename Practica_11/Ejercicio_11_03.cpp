// Materia: Programación I, Paralelo 4.
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026.

#include <iostream>

using namespace std;
int Fibonacci(int numero) ;

int main()
{
    system("chcp 65001");
    system("cls");
    int numero = 0;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> numero;

    cout << "Secuencia de Fibonacci hasta " << numero << " terminos:" << endl;
    for (int i = 0; i < numero; i++) 
    {
        cout << Fibonacci(i) << " ";
    }   
    return 0;
}

int Fibonacci(int numero) 
{
    if (numero <= 1) 
    {
        return numero;
    }
    else
    {
        return Fibonacci(numero - 1) + Fibonacci(numero - 2);
    }
    
}