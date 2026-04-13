// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

#include <iostream>
#include <vector>

using namespace std;

void CargarVoltios(vector<double>& vec);
void MostrarVoltios(const vector<double>& vec);

int main()
{
    vector<double> voltios;
    system ("cls");

    CargarVoltios(voltios);
    MostrarVoltios(voltios);

    return 0;
}

void CargarVoltios(vector<double>& vec)
{
    double datos[9] =
    {
        11.95, 16.32, 12.15,
        8.22,  15.98, 26.22,
        13.54, 6.45,  17.59
    };

    for (int i = 0; i < 9; i++)
    {
        vec.push_back(datos[i]);
    }
}

void MostrarVoltios(const vector<double>& vec)
{
    int indice = 0;    // indice recorre el vector de principio a fin

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)  // for anidados solo controlan el formato visual
        {
            cout << vec[indice] << "\t";
            indice++;
        }
        cout << endl;
    }
}