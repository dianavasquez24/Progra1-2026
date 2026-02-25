//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 23/02/2026

#include <iostream>

using namespace std;
int main()
{
    int numero , suma = 0;
    system ("cls");

    cout << "Ingrese un numero para verificar si es perfecto: "; cin >> numero;
    
    for (int i =1 ; i < numero ; i++)
    {
        if (numero % i ==0)
        {
            suma += i;
        }
    }
    if (suma == numero)
    {
        cout << "El numero " << numero <<" es perfecto"<<endl;
    }
    else
    {
        cout << "El numero " << numero <<" no es perfecto "<<endl;
    }
    



    return 0;
}