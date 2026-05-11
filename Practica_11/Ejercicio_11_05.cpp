// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/05/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> LlenarDatos(int n);
void DesplegarVector(vector<int> vector);
int SumaVector(vector<int> vector, int n);

int main() 
{
    srand(time(0)); 
    system("chcp 65001");
    system("cls");
    vector<int> vector;
    int n;

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    vector = LlenarDatos(n);

    cout << "Vector generado:" << endl;
    DesplegarVector(vector);

    cout << endl ;
    cout << "La suma es: " << SumaVector(vector, n) << endl;

    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

vector<int> LlenarDatos(int n)
{
    vector<int> vectorAux;
    for (int i = 0; i < n; i++)
    {
        vectorAux.push_back(GenerarAleatorio(1, 15)); 
    }
    return vectorAux;
}

void DesplegarVector(vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
}

int SumaVector(vector<int> vector, int n)
{
    if (n == 0)
    {
        return 0; 
    }
    else
    {
        return vector[n - 1] + SumaVector(vector, n - 1); 
    }
}

