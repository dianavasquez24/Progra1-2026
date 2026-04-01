// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>
using namespace std;

void ModificarValores (int porvalor , int &porreferencia );

int main ()
{   
    int valor = 0;
    int referencia = 0;
    system("cls");
    
    cout << "Ingrese el valor pasado por VALOR: ";
    cin >> valor;

    cout << "Ingrese el valor pasado por REFERENCIA: ";
    cin >> referencia;

    ModificarValores(valor,referencia);

    cout << "Valor pasado por VALOR: " << valor << endl;

    cout << "Valor pasado por REFERENCIA: " << referencia << endl;

    return 0;
}

void ModificarValores (int porvalor , int &porreferencia )
{
    porvalor *= 2;
    porreferencia += 10;
    //cout << "\t Por VALOR: " << porvalor << endl;
}