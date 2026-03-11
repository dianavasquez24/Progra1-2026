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

    int n, horas=0 , horas_extra = 0;
    float tarifa = 21.0; 
    float bono_extra = 0, salario_base = 0, salario_extra = 0, salario_total=0;

    cout << "--- PLANILLA DE PAGOS ---" << endl;
    cout << "Ingrese el numero de trabajadores : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {

        horas = Generar_aleatorio(4, 12);
        bono_extra = tarifa;

        if (horas > 8) {

            salario_base = 8 * tarifa;
            horas_extra = horas - 8;
            salario_extra = horas_extra * (tarifa + bono_extra);
        } 

        else {
            salario_base = horas * tarifa;
            salario_extra = 0;
        }

        salario_total = salario_base + salario_extra;

        cout << "\n> TRABAJADOR #" << i << ":" << endl;
        cout << "Horas cumplidas: " << horas << " hrs." << endl;
        cout << "\tSalario Normal: " << salario_base << " Bs." << endl;
        cout << "\tSalario Bonificacion (por horas extra): " << salario_extra << " Bs." << endl;
        cout << "TOTAL A PAGAR: " << salario_total << " Bs." << endl;
        cout << "---------------------------------------" << endl;
    }
    return 0;
}

int Generar_aleatorio (int LimiteInferior , int LimiteSuperior)
    {
        int aleatorio = LimiteInferior+rand()% (LimiteSuperior+1-LimiteInferior);
        return aleatorio;
    }