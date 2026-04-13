// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> LlenarDatos(int n);
vector<int> CombinarVectores(vector<int> vec1, vector<int> vec2);
void DesplegarVector(vector<int> vectorAux);

int main()
{
    int n = 0;
    vector<int> A, B, C;

    srand(time(NULL));
    system ("chcp 65001");
    system("cls");

    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;

    A = LlenarDatos(n);
    B = LlenarDatos(n);
    C = CombinarVectores(A, B);

    cout << "\nVector A:";
    DesplegarVector(A);

    cout << "\nVector B:";
    DesplegarVector(B);

    cout << "\nVector combinado:";
    DesplegarVector(C);

    return 0;
}

vector<int> LlenarDatos(int n)
{
    vector<int> vectorAux;
    for (int i = 0; i < n; i++)
    {
        vectorAux.push_back(GenerarAleatorio(1, 100));
    }
    return vectorAux;
}

vector<int> CombinarVectores(vector<int> vec1, vector<int> vec2)
{
    vector<int> resultado;
    for (int i = 0; i < vec1.size(); i++)
    {
        resultado.push_back(vec1[i]);
    }
    for (int i = 0; i < vec2.size(); i++)
    {
        resultado.push_back(vec2[i]);
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

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}
