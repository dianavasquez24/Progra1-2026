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

    srand(time(NULL));
    system("cls");
    int cantidad_n;

    cout << "Ingrese la cantidad de ninios: " ; cin >> cantidad_n;

    int de1anio = (rand()%(cantidad_n));
    int de2anios = rand()%(cantidad_n - de1anio);
    int de3anios = cantidad_n - de1anio - de2anios;


    int paniales = de1anio * 6;
    paniales += de2anios * 3;
    paniales += de3anios * 2;

    cout << "\nSe tiene " << de1anio << " ninios de 1 anio" << endl;
    cout << "Se tiene " << de2anios << " ninios de 2 anios" << endl;
    cout << "Se tiene " << de3anios << " ninios de 3 anios" << endl;

    cout << "\nLa guarderia utiliza por dia " << paniales << " paniales" << endl;

    return 0;
}