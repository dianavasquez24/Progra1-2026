//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 23/02/2026

#include <iostream>

using namespace std;
int main()
{
    int numero, suma=0;
    cout << "Ingresar un numero: "; cin >> numero;
    for (int i = 0; i <= numero; i++)
    {
        suma += i;
    }
    cout << "La suma de 1 hasta el numero "<< numero << " es: "<<suma<<endl;
    
    return 0;
}