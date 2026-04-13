// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

//4. Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

vector<int> LlenarDatos(int n);
vector<int> MultiplicarVectores(vector<int> vec1, vector<int> vec2);
void DesplegarVector(vector<int> vectorAux);

int main()
{
    int n = 0;
    vector<int> A, B, C;
    system ("chcp 65001");
    system ("cls");

    cout << "Ingrese el tamaño de los vectores: " ;
    cin >> n;

    cout << "\nIngrese los datos del vector A: " << endl ;
    A = LlenarDatos(n);

    cout << "\nIngrese los datos del vector B:" << endl;
    B = LlenarDatos(n);

    C = MultiplicarVectores(A, B);

    cout << "\nVector A:";
    DesplegarVector(A);

    cout << "\nVector B:";
    DesplegarVector(B);

    cout << "\nVector multiplicacion:";
    DesplegarVector(C);

    return 0;
}

vector<int> LlenarDatos(int n)
{
    vector<int> vectorAux;
    for (int i = 0; i < n; i++)
    {
        int valor;
        cout << "Ingrese valor [" << i << "]: ";
        cin >> valor;
        vectorAux.push_back(valor);
    }
    return vectorAux;
}

vector<int> MultiplicarVectores(vector<int> vec1, vector<int> vec2)
{
    vector<int> resultado;
    for (int i = 0; i < vec1.size(); i++)
    {
        resultado.push_back(vec1[i] * vec2[i]);
    }
    return resultado;
}

void DesplegarVector(vector<int> vectorAux)
{
    cout << endl;
    for (int i = 0; i < vectorAux.size(); i++)
    {
        cout << vectorAux[i] << "\t";
    }
    cout << endl;
}