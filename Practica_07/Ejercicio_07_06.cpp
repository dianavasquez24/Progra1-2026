// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

#include <iostream>

using namespace std;

void LlenarVector(int vec[]);
void SumarVectores(int vec1[], int vec2[], int vec3[]);
void DesplegarVector(int vec[]);

int main(){

    int vector1[5], vector2[5], vector3[5];
    system ("chcp 65001");
    system("cls");

    cout << "Ingrese los valores del vector 1: " << endl;
    LlenarVector(vector1);

    cout << "\nIngrese los valores del vector 2: " << endl ;
    LlenarVector(vector2);

    SumarVectores(vector1, vector2, vector3);

    cout << "\nVector 1:\n";
    DesplegarVector(vector1);

    cout << "\nVector 2:\n";
    DesplegarVector(vector2);

    cout << "\nVector 3 (suma):\n";
    DesplegarVector(vector3);

    return 0;
}

void LlenarVector(int vec[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese valor [" << i << "]: ";
        cin >> vec[i];
    }
}

void SumarVectores(int vec1[], int vec2[], int vec3[])
{
    for (int i = 0; i < 5; i++)
    {
        vec3[i] = vec1[i] + vec2[i];
    }
}

void DesplegarVector(int vec[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
}
