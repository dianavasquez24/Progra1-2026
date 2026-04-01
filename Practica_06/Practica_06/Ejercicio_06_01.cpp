// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>

using namespace std;

void ImprimirValores(int x, int y);
void IntercambiarValores(int &x, int &y) ;

int main (){
    int valor1 = 0, valor2 = 0;
    system("cls");

    cout << "Ingrese el primer valor: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
    
    cout << "\nAntes del intercambio:" << endl;
    ImprimirValores(valor1, valor2);

    IntercambiarValores (valor1,valor2);

    cout << "\nDespues del intercambio:" << endl;
    ImprimirValores(valor1, valor2);
    
    return 0;
    }

void ImprimirValores(int x, int y) 
{
    cout << "Primer valor = " << x << endl;
    cout << "Segundo valor = " << y << endl;
}

void IntercambiarValores(int &x, int &y)
{
    int guardar_x = x;    // Guardamos el valor de x antes del cambio
    x = y;
    y = guardar_x;
}

