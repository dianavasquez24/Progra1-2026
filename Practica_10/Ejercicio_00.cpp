// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital 
// Fecha creación: 15/04/2023

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std ;

int GenerarAleatorio ( int LimInferior , int LimSuperior);
void GenerarNombres ( vector <string> nombres, vector <string> apellidos, int n);

int main ()
{
    srand(time(NULL));
    system ("cls"); 
    vector <string> nombres = {"Alejandra" , "Ariana" , "Mateo"  , "Juan" , "Lucas" , "Marco", "Pedro" , "Maria", "Ruth" , "Jose"};
    vector <string> apellidos = {"Torrez" , "Salvatierra" , "Gironda"  , "Gutierrez" , "Romero" , "Miranda", "Escobar" , "Valeriano", "Ruiz" , "Gomez"};
    int n = 0;

    cout << "Ingrese la cantidad de nombres que desea generar: " ;
    cin >> n;
    GenerarNombres ( nombres,apellidos, n);
        
    return 0;
}
int GenerarAleatorio ( int LimInferior , int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = (rand() % (LimSuperior - LimInferior +1 )) + LimInferior;
    return aleatorio;
}

void GenerarNombres ( vector <string> nombres, vector <string> apellidos, int n)
{
    cout << "Los nombres generados son: " << endl;
    for (int i = 0; i < n; i++)
    {
       cout << nombres [GenerarAleatorio(0,9)] + " " + apellidos [GenerarAleatorio(0,9)] + " " + apellidos [GenerarAleatorio(0,9)] << endl;

    }
}