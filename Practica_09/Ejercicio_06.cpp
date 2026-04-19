// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>

using namespace std;

void LlenarMatriz(int matriz[100][100], int filas, int columnas);
void ImprimirMatriz(int matriz[100][100], int filas, int columnas);
void TransponerMatriz(int MatrizA[100][100], int Transpuesta[100][100], int filas, int columnas);

int main() {
    system("cls");
    int filas, columnas;
    int MatrizA[100][100], Transpuesta[100][100];

    cout << "Trasponer una matriz" << endl;
    cout << "\nIngrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    cout << "\nMatriz original (" << filas << "x" << columnas << "):" << endl;

    LlenarMatriz(MatrizA, filas, columnas);
    ImprimirMatriz(MatrizA, filas, columnas);

    TransponerMatriz(MatrizA, Transpuesta, filas, columnas);

    cout << "\nMatriz Transpuesta (" << columnas << "x" << filas << "):" << endl;
    ImprimirMatriz(Transpuesta, columnas, filas);
    cout << endl;

    return 0;
}

void LlenarMatriz(int matriz[100][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = (rand() % 16); 
        }
    }
}

void ImprimirMatriz(int matriz[100][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void TransponerMatriz(int MatrizA[100][100], int Transpuesta[100][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)             // filas de A
    {
        for (int j = 0; j < columnas; j++)      // columnas de A
        { 
            Transpuesta[j][i] = MatrizA[i][j]; // intercambio fila a columna
        }
    }
}