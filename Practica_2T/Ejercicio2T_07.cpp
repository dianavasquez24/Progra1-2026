// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez. 
// Fecha creación: 11/05/2026
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz(int monitoreo[5][24]);
void ImprimirMatriz(vector<string> pacientes, int monitoreo[5][24]);
void VerificarAlertas(vector<string> pacientes, int monitoreo[5][24], int umbral);

int main()
{
    srand(time(NULL));
    system("chcp 65001");
    system("cls");
    vector <string> pacientes = {"Ana Torroja","Juan Luna","Sergio Murillo","Liliana Espinoza","Mercedes Lima"};
    int monitoreo [5][24];
    int umbral= 0;

    LlenarMatriz(monitoreo);
    ImprimirMatriz(pacientes, monitoreo);

    cout << "-------------------------------------- " ;
    cout << "\nIngrese el umbral de temperatura: ";
    cin >> umbral;
    cout << "-------------------------------------- " ;

    cout << "\n--- Verificación de alertas ---" << endl;
    VerificarAlertas(pacientes, monitoreo, umbral);

    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio;
    aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}
void LlenarMatriz(int monitoreo[5][24])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            monitoreo[i][j] = GenerarAleatorio(20, 40);
        }
    }
}

void ImprimirMatriz(vector<string> pacientes, int monitoreo[5][24])
{
    cout << "\nTemperaturas registradas :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << pacientes[i] << ":   ";
        for (int j = 0; j < 24; j++)
        {
            cout << monitoreo[i][j] << "°C   ";
        }
        cout << endl;
    }
}
void VerificarAlertas(vector<string> pacientes, int monitoreo[5][24], int umbral)
{
    for (int i = 0; i < 5; i++)
    {
        int contador = 0;
        for (int j = 0; j < 24; j++)
        {
            if (monitoreo[i][j] > umbral)
            {
                contador++;
            }
        }
        if (contador > 3)
        {
            cout << "\t"<<  pacientes[i] << " superó el umbral " << contador << " veces." << endl;
        }
        
    }
}