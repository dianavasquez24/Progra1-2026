//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream>

using namespace std;
int main()
{
    float precio_producto , IVA= 0.13 , precio_IVA=0;
    system ("cls");

    cout<<"Ingresar el precio del producto: "; cin >> precio_producto;

    precio_IVA = precio_producto -( precio_producto*IVA );

    cout <<"\nPrecio aplicando el IVA: " <<precio_IVA;

    return 0;
}