//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream>

using namespace std;
int main()

{
    int numero;
    system("cls") ;
    
    cout<<"Ingresar un numero entre [1-12]: "; cin>> numero;
	cout << "\nMes: ";

	switch(numero)
    {
	case 1: cout<<"Enero";break;
	case 2: cout<<"Febrero";break;
    case 3: cout<<"Marzo";break;
	case 4: cout<<"Abril";break;
	case 5: cout<<"Mayo";break;
	case 6: cout<<"Junio";break;
	case 7: cout<<"Julio";break;
	case 8: cout<<"Agosto";break;
	case 9: cout<<"Septiembre";break;
	case 10: cout<<"Octubre";break;
	case 11: cout<<"Noviembre";break;
	case 12: cout<<"Diciembre";break;
	default: cout<<"No existe mes para ese numero";break;
	}

    return 0;
}