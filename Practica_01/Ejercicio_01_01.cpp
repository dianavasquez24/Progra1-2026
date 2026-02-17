//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream> 

using namespace std;

int main()
{
    int numero1 ; //variables numeros 
    int numero2 ;
    int suma=0 , resta=0 , multiplicacion=0 , division=0; //operaciones

    system("cls");

    cout << "Ingrese un numero : ";
    cin >> numero1 ;
    cout << "Ingrese otro numero: ";
    cin >> numero2 ;
    
    suma= numero1 + numero2;
    resta= numero1 - numero2; 
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;
    
    cout <<"\nLa suma es : "<<suma << endl;
    cout <<"La resta es : "<< resta << endl;
    cout <<"La multiplicacion es : "<<multiplicacion<< endl;
    cout <<"La division es : "<< division << endl ;


    return 0;
}