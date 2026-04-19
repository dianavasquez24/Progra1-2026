// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz(int matriz[100][100], int n);
void ImprimirMatriz(int matriz[100][100], int n);
void IntercambiarFilas(int matriz[100][100], int n);

int main() {
    int n;
    int matriz[100][100];
    system("cls");

    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    LlenarMatriz(matriz, n);

    cout << "\nMatriz original: " << endl;
    ImprimirMatriz(matriz, n);

    IntercambiarFilas(matriz, n);

    cout << "\nMatriz con filas intercambiadas: " << endl;
    ImprimirMatriz(matriz, n);

    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void LlenarMatriz(int matriz[100][100], int n)
{
    for (int i = 0; i < n; i++)     // filas
    {          
        for (int j = 0; j < n; j++)     // columnas
        {
            matriz[i][j] = GenerarAleatorio(1, 9);
        }
    }
}

void ImprimirMatriz(int matriz[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {          
        for (int j = 0; j < n; j++)
        {      
            cout << matriz[i][j] << "\t";
        }
        cout << endl;      //salto para pasar a la siguiente fila
    }
}

void IntercambiarFilas(int matriz[100][100], int n)
{
    for (int j = 0; j < n; j++)
    {
        int aux = matriz[0][j];   // guardad el valor de la primera fila .
        matriz[0][j] = matriz[n-1][j] ;     // intercambio, n-1 = ultima fila , columna no cancia 
        matriz[n-1][j] = aux;
    }
}