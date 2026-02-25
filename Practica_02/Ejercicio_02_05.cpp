//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 23/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int numero, dato, contador = 0;
    system("cls");

    srand(time(NULL));
    dato = 1 + rand()%(100);

    do
    {
        cout<<"Ingrese un numero: ";
        cin >> numero;

        if (numero > dato) 
        {
        cout << "\nDigite un numero menor: " << endl;
        }
        if (numero < dato)
        {
           cout << "\nDigite un numero mayor"<< endl;
        }
        contador++;

    } while (numero != dato );
    
    cout << "\nFELICIDADES ADIVINASTE EL NUMERO\n";
    cout << "Numero de intentos: " << contador << endl;


    return 0;
}