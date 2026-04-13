// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

#include <iostream>

using namespace std;

int LlenarVector(int vec[]);
void DesplegarVector(int v[], int cantidad);

int main()
{
    int vector[10];
    int cantidad;

    cantidad = LlenarVector(vector);

    cout << "\nElementos introducidos en el vector:\n";
    DesplegarVector(vector, cantidad);

    return 0;
}

int LlenarVector(int vec[])
{
    int contador = 0;
    int numero;

    do  
    {
        cout << "Ingrese un numero (negativo para terminar): ";
        cin >> numero;

        if (numero >= 0)
        {
            vec[contador] = numero;
            contador++;
        }

    } while (numero >= 0 && contador < 10);

    return contador;
}

void DesplegarVector(int vec[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
}