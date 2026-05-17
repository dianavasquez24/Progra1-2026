// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez. 
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz(int notas[20][3]);
void ImprimirMatriz(int notas[20][3]);
void CalcularPromedios(int notas[20][3]);

using namespace std;
int main()
{
    srand(time(NULL));
    system("chcp 65001");
    system("cls");

    int notas [20][3];

    LlenarMatriz(notas);
    ImprimirMatriz(notas);

    cout << "--------------------------------------" << endl;
    CalcularPromedios(notas);

    return 0; 
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio;
    aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}
void LlenarMatriz (int notas[20][3])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            notas [i][j] = GenerarAleatorio (1,100);  
        }
    } 
}
void ImprimirMatriz(int notas[20][3])
{
    cout << "\nNotas registradas:" << endl;
    for (int i = 0; i < 20; i++)
    {
    cout << "Estudiante " << i+1 << ":\t ";
        for (int j = 0; j  < 3; j++)
        {
            cout << notas[i][j] << "\t";
        }
        cout << endl;
    }
}
void CalcularPromedios (int notas [20][3])
{
    int sumaPromedioGeneral= 0 ;
    int promedio= 0;
    int mejorPromedio = -100;
    int mejorEstudiante = 0;

    for (int i = 0; i < 20; i++)
    {
        int sumaPromedio = 0;                // suma solo la nota de ese estudiante, si  no esta acumula de otros estudiantes
        for (int j = 0; j < 3 ; j++)
        {
             sumaPromedio += notas [i][j];
        }

        int promedio = sumaPromedio/3;
        cout << " Promedio estudiante " << i+1 << " : " << promedio << endl;

        sumaPromedioGeneral += promedio;

        if ( promedio > mejorPromedio )
        {
            mejorPromedio = promedio;
            mejorEstudiante = i+1;
        }
    } 
    cout << "\nEstudiante con mejor promedio: " << mejorEstudiante << "\tpromedio: " << mejorPromedio << endl;
    cout << "Promedio general del grupo: " << sumaPromedioGeneral/ 20 << endl;
}