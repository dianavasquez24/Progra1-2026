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

    int lanzamiento , pares=0 ;

    cout << "Ingrese la cantidad de veces que se tira el dado: "; cin >> lanzamiento;

     for (int i = 0; i < lanzamiento; i++)
     {
        int dado = (rand() % 6)+1;

        if (dado == 2 || dado == 4 || dado == 6)
        {
            pares++;
        }
     }
     
     cout << "La frecuencia de numeros pares es: "<< pares << endl;
    
    return 0;
    }