// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>

using namespace std;

void LlenarMatriz(int matriz[100][100], int filas, int columnas);
void ImprimirMatriz(int matriz[100][100], int filas, int columnas);
void MultiplicarMatrices(int A[100][100], int B[100][100], int C[100][100], int fa, int ca, int fb, int cb);

int main() {
    system("chcp 65001");
    system("cls");
    int fa, ca, fb, cb;
    int A[100][100], B[100][100], C[100][100];

    cout << "MULTIPLICACION DE MATRICES:" << endl;

    cout << "\nNumero de filas de A: ";
    cin >> fa;
    cout << "Numero de columnas de A: ";
    cin >> ca;

    cout << "\nNumero de filas de B: ";
    cin >> fb;
    cout << "Numero de columnas de B: ";
    cin >> cb;

    cout << "\nMatriz A (" << fa << "x" << ca << "):\n";
    LlenarMatriz(A, fa, ca);
    ImprimirMatriz(A, fa, ca);

    cout << "\nMatriz B (" << fb << "x" << cb << "):\n";
    LlenarMatriz(B, fb, cb);
    ImprimirMatriz(B, fb, cb);

    if (ca == fb)           // validar que si se pueda multiplicar 
    {
        MultiplicarMatrices(A, B, C, fa, ca, fb, cb);

        cout << "\nMatriz C = A x B (" << fa << "x" << cb << "):" << endl;

        ImprimirMatriz(C, fa, cb);
    }
    else
    {
        cout << "\nLA MULTIPLICACION DE MATRICES NO SE PUEDE REALIZAR" << endl;
    }

    return 0;
}

void LlenarMatriz(int matriz[100][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = (rand() % 9) + 1; 
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

void MultiplicarMatrices(int A[100][100], int B[100][100], int C[100][100], int fa, int ca, int fb, int cb)
{
    for (int i = 0; i < fa; i++)               // filas de A
    {
        for (int j = 0; j < cb; j++)           // columnas de B
        {
            C[i][j] = 0;                       // inicio de C
            for (int k = 0; k < ca; k++)
            {                                   
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}