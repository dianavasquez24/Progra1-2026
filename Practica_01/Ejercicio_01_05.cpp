//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream> 
#include <math.h>
using namespace std;

int main()
{
    float cateto1 , cateto2 , hipotenusa = 0;
    system ("cls");
    
    cout <<"Ingresar primer cateto del triangulo rectangulo: "; cin >> cateto1;
    cout <<"Ingresar el segundo cateto del triangulo resctagulo: "; cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

    cout <<"\nLa hipotenusa del triangulo rectangulo es: " << hipotenusa;


    return 0;
}