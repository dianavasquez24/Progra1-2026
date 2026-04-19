// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital 
// Fecha creación: 15/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void inicializarInventario(int bodega[3][3]);
void balancearCarga(int bodega[3][3], int fila, int &totalTransferido);
void mostrarReporte(vector<string> nombresProductos, int bodega[3][3]);

int main() {
    srand(time(NULL));
    system("chcp 65001");
    system ("cls");
    int cantidadProductos = 3 ;                   // porque la matriz es 3x3
    vector<string> nombresProductos(cantidadProductos);

    cout << "Ingrese los nombres de los productos: " << endl;
    for (int i = 0; i < cantidadProductos; i++)
    {
        cout << "Producto " << i+1 << ": ";
        cin >> nombresProductos[i];
    }

    int bodega[3][3];               // matriz de inventario
    inicializarInventario (bodega) ;

    cout << "\nInventario inicial:" << endl;
    cout << endl;
    mostrarReporte(nombresProductos, bodega);

    int totalTransferido = 0;          // contador
    for (int fila = 0; fila < cantidadProductos; fila++)    //recorrre las filas
    {
        balancearCarga(bodega, fila, totalTransferido);
    }

    cout << "\nInventario despues de balancear carga:" << endl;
    cout << endl;
    mostrarReporte(nombresProductos, bodega);

    cout << "\nTotal transferido entre depositos: " << totalTransferido << endl;
    cout << endl;
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}

void inicializarInventario(int bodega[3][3])   // llena la matriz
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bodega[i][j] = GenerarAleatorio(0, 100);
        }
    }
}

void balancearCarga(int bodega[3][3], int fila, int &totalTransferido)
{
    if (bodega[fila][0] > 80)       // hay excedente?
    {                        //Si el depósito 1 de un producto tiene más de 80 unidades, transfiere el excedente al depósito 2 de ese mismo producto, modificando la matriz original y actualizando el totalTransferido por referencia. 
        int excedente = bodega[fila][0] - 80;  // de cuanto es el excedente
        bodega[fila][0] = 80;           // cambiar el deposito 1 por 80
        bodega[fila][1] += excedente;   // en la segunda posicion (deposito 2) sumarle el excedente
        totalTransferido += excedente;  // contador de cuanto se tranfirio y como es por referencia cambia el valor en el main 
    }
}

void mostrarReporte(vector<string> nombresProductos, int bodega[3][3])      //Imprime el nombre del producto seguido de su stock en los 3 depósitos
{
    cout << "Producto\tDeposito1\tDeposito2\tDeposito3" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << nombresProductos[i] << "\t\t";
        for (int j = 0; j < 3; j++)
        {
            cout << bodega[i][j] << "\t\t";
        }
        cout << endl;
    }
}
