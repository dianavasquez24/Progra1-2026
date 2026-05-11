// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026

#include <iostream>

using namespace std;

int MCD (int x, int y);

int main()
{
    system("chcp 65001");
    system("cls");
    int x = 0 , y = 0;
    cout << "Ingrese dos numeros enteros: " << endl ;
    cout << "Primer numero: " ; cin >> x;
    cout << "Segundo numero: " ; cin >> y;

    cout << "El Maximo Comun Divisor de " << x << " y " << y << " es: " << MCD (x, y) << endl;

    return 0;
}
int MCD (int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {   
       // cout <<  y << "---- " <<  x % y << endl;
        return MCD (y , x % y);
    }
}