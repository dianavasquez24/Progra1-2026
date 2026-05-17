// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez. 
// Fecha creación: 11/05/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> GenerarPixeles(int n);
void MostrarPixeles(vector<int> pixeles);
void RangoPixeles(vector<int> pixeles);

int main(){
    srand(time(NULL));
    system("chcp 65001");
    system("cls");

    vector<int> pixeles;
    int n = 0;
    
    cout << "Ingrese la cantidad de pixeles: ";
    cin >> n;

    pixeles = GenerarPixeles(n);
    MostrarPixeles(pixeles);
    RangoPixeles(pixeles);

    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio;
    aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
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
void RangoPixeles(vector<int> pixeles)
{
    vector<int> conteo(26, 0); 
    for (int i = 0; i < pixeles.size(); i++)
    {
        int valor =  pixeles[i];
        int rango = valor / 10;
        conteo[rango]++;
    }

    cout << "\nDistribución por rangos:" << endl;
    for (int i = 0; i < conteo.size(); i++)
    {
        int inicio = i * 10;
        int fin = -10;
        if (i == 25)
        {
            fin = 255;
        } else {
            fin = inicio + 9;
        }
        cout << inicio << "-" << fin << ": " << conteo[i] << " pixeles" << endl;
    }
    
}