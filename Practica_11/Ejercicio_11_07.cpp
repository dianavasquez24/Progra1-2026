// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026

#include <iostream>

using namespace std;

int Q(int n);

int main()
{
    system("chcp 65001");
    system("cls");
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "La suma de cuadrados hasta " << n << " es: " << Q(n) << endl;

    return 0;
}

int Q(int n)
{
    if (n == 1)
    {
        return 1; 
    } 
    else
    {
        return (n * n) + Q(n - 1);
    }
}