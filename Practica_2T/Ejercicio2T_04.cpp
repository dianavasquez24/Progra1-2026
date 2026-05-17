// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez. 
// Fecha creación: 11/05/2026

#include <iostream>
#include <cmath>        
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz(int matriz[100][100], int n, int A, int B);
void ImprimirMatriz(int matriz[100][100], int n);
int SumaPrimeraColumna(int matriz[100][100], int n);
int ProductoPrimeraFila(int matriz[100][100], int n);
void MayorValor(int matriz[100][100], int n);

int main() {
    system("chcp 65001");
    system("cls");
    
    int n, A, B;
    int matriz[100][100];
    
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    cout << "Coloque el rango de los numeros dentro de la matriz:" << endl;
    cout << "Ingrese el limite inferior (A): ";
    cin >> A;
    cout << "Ingrese el limite superior (B): ";
    cin >> B;

    LlenarMatriz(matriz, n, A, B);

    cout << "\nMatriz generada:" << endl ;
    ImprimirMatriz(matriz, n);

    cout << "\nSuma de la primera columna: " << SumaPrimeraColumna(matriz, n) << endl;
    cout << "Producto de la primera fila: " << ProductoPrimeraFila(matriz, n) << endl;

    MayorValor(matriz, n);
    return 0 ; 
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void LlenarMatriz(int matriz[100][100], int n, int A, int B)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = GenerarAleatorio(A, B);
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
int SumaPrimeraColumna(int matriz[100][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += matriz[i][0];         
    }
    return suma;
}
int ProductoPrimeraFila(int matriz[100][100], int n)
{
    int producto = 1;
    for (int j = 0; j < n; j++)
    {
        producto *= matriz[0][j];        
    }
    return producto;
}
void MayorValor(int matriz[100][100], int n)
{
    int mayor = -100;
    int fila = 0, columna = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > mayor)    
            {                            
                mayor = matriz[i][j];      
                fila = i;                  
                columna = j;                   
            }
        }
    }

    cout << "Mayor valor: " << mayor << " en posicion [" << fila << "][" << columna << "]" << endl;
}