// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <cmath>        
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz(int matriz[100][100], int n, int A, int B);
void ImprimirMatriz(int matriz[100][100], int n);
int SumaUltimaColumna(int matriz[100][100], int n);
int ProductoUltimaFila(int matriz[100][100], int n);
void MayorValor(int matriz[100][100], int n);
double DesviacionEstandar(int matriz[100][100], int n);

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

    cout << "\nSuma de la ultima columna: " << SumaUltimaColumna(matriz, n) << endl;
    cout << "Producto de la ultima fila: " << ProductoUltimaFila(matriz, n) << endl;

    MayorValor(matriz, n);

    cout << "Desviacion estandar: " << DesviacionEstandar(matriz, n) << endl;

    return 0;
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

int SumaUltimaColumna(int matriz[100][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += matriz[i][n-1];         // ultima columna
    }
    return suma;
}

int ProductoUltimaFila(int matriz[100][100], int n)
{
    int producto = 1;
    for (int j = 0; j < n; j++)
    {
        producto *= matriz[n-1][j];         // ultima fila
    }
    return producto;
}

void MayorValor(int matriz[100][100], int n)
{
    int mayor = matriz[0][0];
    int fila = 0, columna = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > mayor)    // compara el datos enviado en esa posicion 
            {                            // si el nueevo es mayor cambia 
                mayor = matriz[i][j];       // se gusrada el dato 
                fila = i;                  
                columna = j;                   // se guarda la posicion
            }
        }
    }

    cout << "Mayor valor: " << mayor << " en posicion [" << fila << "][" << columna << "]" << endl;
}

double DesviacionEstandar(int matriz[100][100], int n)
{
    int totalElementos = n * n;
    double suma = 0, sumaCuadrados = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma += matriz[i][j];
            sumaCuadrados += matriz[i][j] * matriz[i][j];
        }
    }

    double media = suma / totalElementos;
    double varianza = (sumaCuadrados / totalElementos) - (media * media);
    return sqrt(varianza);
}