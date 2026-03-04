// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110
// Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    system("cls");
    srand(time(NULL));
    
    int factorial = 1;    
    int numero = (rand() % 10)+1;

    for (int i= 1; i<= numero ; i++)
    {
        factorial *= i;
    }

    cout << "El numero generado es: " << numero << endl;
    cout << "Su factorial es: " << factorial << endl;
    
    return 0;
    }