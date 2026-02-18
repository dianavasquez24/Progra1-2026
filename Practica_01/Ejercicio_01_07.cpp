//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream>

using namespace std;
int main()
{
    int edad;
    system("cls");

    cout << "Ingresar edad: "; cin >> edad;
    if ( edad>=18 && edad<=25 )
    {
        cout << "Se encuentra en el rango de [18-25]";
    }
    else
    {
       cout <<"No se encuentra en el rango de [18-25]"; 
    }
    
    


    return 0;
}