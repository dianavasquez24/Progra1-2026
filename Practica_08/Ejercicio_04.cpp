// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> GenerarPixeles(int n );
void MostrarPixeles(vector<int> pixeles);
void ContarPixelesPorRango(vector<int> pixeles);

int main() {
    srand(time(NULL));
    system("chcp 65001");
    system("cls");

    int n;
    cout << "Ingrese la cantidad de pixeles: ";
    cin >> n;

    vector<int> pixeles = GenerarPixeles(n);

    MostrarPixeles(pixeles);
    ContarPixelesPorRango(pixeles);

    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

vector<int> GenerarPixeles(int n)
{
    vector<int> pixeles;
    for (int i = 0; i < n ; i++) 
    {
        pixeles.push_back(GenerarAleatorio(0,255));
    }
    return pixeles;
}

void MostrarPixeles(vector<int> pixeles)
{
    cout << "\nPixeles: ";
    for (int i = 0; i < pixeles.size(); i++)
    {
        cout << pixeles[i] << "\t";
    }
    cout << endl;
}

void ContarPixelesPorRango(vector<int> pixeles)
{
    vector<int> conteo(26, 0); // 26 espacios ppor  0-9 = 0 y 250 - 255 = 25 , todos inician con 0

    for (int i = 0; i < pixeles.size(); i++)
    {
        int valor = pixeles[i];  // que hay dentro de esa posicion
        int rango = valor / 10; // división entera para clasificar hasta 25
        conteo[rango]++; // va sumando segun la clasificacion  (segun a la posicion al cual corresponde)
    }

    cout << "\nDistribución por rangos:" << endl;
    for (int i = 0; i < conteo.size(); i++)
    {
        int inicio = i * 10;
        int fin;
        // Usamos if para el último rango
        if (i == 25)
        {
            fin = 255;
        } else {
            fin = inicio + 9;
        }
        cout << inicio << "-" << fin << ": " << conteo[i] << " pixeles" << endl;
    }
}