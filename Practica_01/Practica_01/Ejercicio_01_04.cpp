//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream> 

using namespace std;

int main()
{
    float nota_practicas , nota_teorico , nota_participacion , nota_final = 0 ;
    
    system ("cls");

    cout <<"Ingresar nota de practicas (0-100): "; cin >> nota_practicas;
    cout <<"Ingresar nota teorica (0-100): "; cin >> nota_teorico;
    cout <<"Ingresar nota participacion (0-100): "; cin >> nota_participacion;
    
    nota_final= (nota_practicas+0.3)+(nota_teorico*0.6)+(nota_participacion*0.1);
    
    cout <<"\n\nLa clalificacion final de la nota es: "<< nota_final;

    return 0;
}