// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110
// Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    system ("cls");
    srand(time(NULL));

    int cantidad_n , mayor = 0, menor = 1000;
    double suma = 0.0;

    cout << "Ingrese la cantidad de numeros a generar: " ; cin >> cantidad_n;
    
    for(int i = 0; i < cantidad_n; i++){
        int numero = rand()%(1000) + 1;
        suma += numero;
        if(numero > mayor){
            mayor = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }

    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << suma / cantidad_n << endl; 
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    return 0;
}