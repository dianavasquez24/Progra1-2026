// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Fecha creación: 06/03/2026 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int aleatorio (int LimiteInferior , int LimiteSuperior);

int main (){
    srand(time(NULL));

    int n=0 ;
    float sumaprecio = 0.0 ,precio = 0.0;
    float iva= 0.0 , sumaiva= 0.0 , suma_con_iva = 0.0;
    float sumatotal = 0.0 , suma_final= 0.0;
    float descuento = 0.0;
    system("cls");

    cout << "Ingrese el numero de productos a vender: "; cin >> n;

    for (int i = 1 ; i <= n ; i++)
    {
        precio = aleatorio(20,50);
        iva = precio * 0.13;
        suma_con_iva = precio + iva ; 

        sumaprecio += precio;
        sumaiva += iva;
        sumatotal += suma_con_iva;
 
    }
    if (sumatotal >= 2500)
    {
        descuento = sumatotal *0.05;
    }
    suma_final= sumatotal - descuento;

    cout << " El total de ventas (sin IVA )es: " << sumaprecio << endl;
    cout << " El IVA es: " <<  sumaiva << endl;
    cout << " Total facturado (con IVA): " << sumatotal << endl;
    cout << "\tDescuento aplicado (5%): " << descuento << endl;
    cout << " El total con el descuento es: " << suma_final << endl;

    return 0;
    }

    int aleatorio (int LimiteInferior , int LimiteSuperior)
    {
        int compra = LimiteInferior+rand()% (LimiteSuperior+1-LimiteInferior);
        return compra;
    }