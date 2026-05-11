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
void DesplegarVector(vector<int> vectorAux);
bool sonIguales(vector<int> v1, vector<int> v2, int n , int indice );

int main()
{
    srand(time(0));
    system("chcp 65001");
    system("cls");
    vector<int> vec1 ;
    vector<int> vec2 ;
    int n = 0, indice = 0;

    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;

    vec1 = LlenarDatos(n);
    vec2 = LlenarDatos(n);

    cout << "Vector 1:"; 
    DesplegarVector(vec1);

    cout << "Vector 2:"; 
    DesplegarVector(vec2);

    if (sonIguales(vec1, vec2, n , indice))
    {
        cout << "Los vectores son iguales" << endl;
    } else
    {
        cout << "Los vectores son diferentes" << endl;
    }

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
        vectorAux.push_back(GenerarAleatorio(1, 5)); 
    }
    return vectorAux;
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

bool sonIguales(vector<int> v1, vector<int> v2, int n , int indice )
{

    if (indice == n)
    {
        return true;
    }
    if (v1[indice] != v2[indice])
    {
        return false;
    }
    else
    {
        return sonIguales(v1, v2, n, indice + 1);
    }
}