//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet:8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 16/02/2026

#include <iostream>

using namespace std;
int main()
{
    int numero1 , numero2 , numero3, numero4 ;
     system("cls");
     cout << "Ingresar tres numeros : \n";
     cout << "Primer numero: "; cin >> numero1;
     cout << "Segundo numero: "; cin >> numero2;
     cout << "Tercer numero: "; cin >> numero3;
    
     cout << "\nIngresar un cuarto numero: "; cin >> numero4;

     if (numero4 == numero1 || numero4== numero2 || numero4 == numero3)
     {
        cout << "\nEl cuarto numero coincide con alguno de los anteriores" ;
     }
     else
     {
       cout <<"\nEl cuarto numero no coincide con alguno de los anteriores." ;
     }
     
     return 0;

     
}