//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante: Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream>

using namespace std;
int main()
{
    int numero;
    system ("cls");

    cout << "Ingrese un numero: "; cin >> numero;
    
    if (numero % 2 == 0){
            cout << "El numero es par";
        }
    else
    {
        cout << "El numero es impar";
    }
    
    return 0;
}