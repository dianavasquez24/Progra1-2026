// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

void GenerarMatriz(int matriz[100][100], int n);
void ImprimirMatriz(int matriz[100][100], int n);

int main() {
    system("chcp 65001");
    system("cls");
    int n;
    int matriz[100][100];

    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    GenerarMatriz(matriz, n);

    cout << "\nMatriz generada:" << endl;
    ImprimirMatriz(matriz, n);

    return 0;
}

void GenerarMatriz(int matriz[100][100], int n) {
    for (int i = 0; i < n; i++)             // filas
    {
        int inicio = 1 + (i * 2);           // cada fila empieza con dos unidades mas que la anterio 1 , 1*2 + 1 = 3...
                                          
        for (int j = 0; j < n; j++)         // columnas
        {                                           
            matriz[i][j] = inicio + j;      // el valor por la que inicia la fila mas uno , consecutivo
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
        cout << endl;
    }
}