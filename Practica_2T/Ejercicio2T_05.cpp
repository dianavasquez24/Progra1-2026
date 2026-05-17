// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Niinosks Vasquez Benitez. 
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz (int ventas[4][7]);
void ImprimirMatriz (int ventas[4][7]);
void VentasSucursal (int ventas [4][7]);
void VentasPorDia (int ventas [4][7]);

using namespace std;
int main()
{
    srand(time(NULL));
    int ventas [4][7];

    LlenarMatriz (ventas);
    ImprimirMatriz(ventas);

    cout << "-------------------------------------- " << endl;
    cout << "Ventas por sucursal: " << endl;
    VentasSucursal(ventas);

    cout << "-------------------------------------- " << endl;
    cout << "Ventas por dia: " << endl;
    VentasPorDia(ventas);

    return 0; 
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio;
    aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}
void LlenarMatriz (int ventas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7 ; j++)
        {
            ventas [i][j] = GenerarAleatorio (1,100);  
        }
    } 
}
void ImprimirMatriz (int ventas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Sucursal " << i+1 << ": \t";
        for (int j = 0; j < 7 ; j++)
        {
            cout << ventas [i][j] << "\t" ;
        }
        cout << endl ;
    }
}

void VentasSucursal (int ventas [4][7])
{
    for (int i = 0; i < 4; i++)
    {
        int vsucursal = 0;
        for (int j = 0; j < 7 ; j++)
        {
            vsucursal += ventas [i][j]; 
        }
        cout << "Sucursal " << i+1 << ": " << vsucursal << endl;
    } 
}
void VentasPorDia (int ventas [4][7])
{
    for (int j = 0; j < 7; j++)
    {
        int vdia = 0;
        for (int i = 0; i < 4; i++)
        {
            vdia += ventas [i][j]; 
        }
        cout << "Dia " << j+1 << ": " << vdia << endl;
    }  
}