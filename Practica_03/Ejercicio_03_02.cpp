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
    system ("cls");
    srand(time(NULL));

    int cantidad_n;
    double cara = 0.0;

    cout << "Ingrese la cantidad de veces que se tira la moneda: "; cin >> cantidad_n;

    for(int i = 0; i < cantidad_n ; i++){
        int moneda = rand()%(2);

        if(moneda == 0){
            cara++;
        }
    }

    cout << "El porcentaje de veces que sale cara es: " << cara / cantidad_n << endl;
    cout << "El porcentaje de veces que sale cruz es: " << 1 - (cara / cantidad_n) << endl;
    return 0;
}