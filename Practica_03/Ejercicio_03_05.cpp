//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){

    system("cls");
    srand(time(NULL));

    int cantidad_n , divisores  , contador =0 ;

    cout << "Ingrese la cantidad de numeros a generar: " ; cin >> cantidad_n;

    for (int i = 0; i < cantidad_n; i++)
    {
        int numero = (rand() % 10000)+1;

        divisores = 0;
        for (int j = 1; j <= numero; j++)
        {
            if (numero % j == 0)
            {
                divisores++;
            }
        }

        if (numero >= 2 && divisores == 2)
        {
            contador++;
            cout << " " << numero <<" , ";
        }
        else
        {
            cout << " " << numero << " , ";
        }    
    }
    
    cout << "\nCantidad de numeros primos: " << contador << endl;

    return 0;
    }