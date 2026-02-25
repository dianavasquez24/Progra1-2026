//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 23/02/2026

#include <iostream>

using namespace std;
int main()
{
    int numero1, numero2 ;
    system ("cls");
    do
    {
        cout << "Ingresar el primer numero: "; cin >> numero1;
        cout << "Ingresar el segundo numero(debe ser distinto al primer numero): "; cin >> numero2;

        if(numero1 == numero2)
        {
            cout << "\nLos numeros deben ser distintos\n"<< endl;
        }
    } while (numero1 == numero2);
    
    if (numero1 > numero2)
    {
        cout <<"Serie descendente: " ;
        for ( int i = numero1 ; i >= numero2 ; i--)
        {
            cout << i << " , ";
        }
    }
    else 
    {
        cout <<"Serie ascendente: " ;
        for ( int i = numero1 ; i <= numero2 ; i++)
        {
            cout << i << " , ";
        }
    }


    return 0;
}