// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e interactividad digital. 
// Fecha creación: 23/02/2026 

#include <iostream>

using namespace std;

int main()
{
    int numero, i=1 ;

    system ("cls");

    do
    
    {
        cout << "Ingrese un numero: "; cin >> numero;

    } while ((numero < 1) || (numero > 10));

    cout << "\nTABLA DE MULTIPLICAR DEL"<<numero<<"\n"<<endl;
    
    for ( i; i <=10 ; i++)
    {
        cout << numero <<" * " << i <<" = "<< numero*i <<endl;
    }
    cout<<"\n";
    return 0;
}