//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 23/02/2026

#include <iostream>

using namespace std;
int main()
{
    int numero,factorial,suma=0;
    system("cls");
    
    cout << "Ingrese un numero para la suma de factoriales: "; cin >> numero;
    for (int i = 1 ; i <= numero ; i++ )
    {
        factorial=1;

        for (int j = 1 ; j <= i; j++)
        {
            factorial *= j;
        }
        
        suma += factorial;
    }

    cout << "La suma de los factoriales hasta "<< numero<< "! es: "<< suma << endl;

    return 0;
}