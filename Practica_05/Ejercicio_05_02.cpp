// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Fecha creación: 06/03/2026 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Generar_aleatorio (int LimiteInferior , int LimiteSuperior);

int main (){
    srand(time(NULL));
    system ("cls");

    int n, antiguedad;
    float sueldo_basico = 3300; 
    float ventas_mes, comision, sueldo_total;
    
    cout << "--- Sistema de Planillas 'Cosmeticos' ---" << endl;
    cout << "Sueldo Basico: " << sueldo_basico << " Bs." << endl;
    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> n;
    return 0;
}
int Generar_aleatorio (int LimiteInferior , int LimiteSuperior)
    {
        int aleatorio = LimiteInferior+rand()% (LimiteSuperior+1-LimiteInferior);
        return aleatorio;
    }