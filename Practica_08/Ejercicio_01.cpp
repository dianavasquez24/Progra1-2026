// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void GenerarPersonas(vector<string> nombres, vector<string> apellidos, vector<int> edades, int n);
vector<int> GenerarEdades(int cantidad);

int main() {
    srand(time(NULL));
    system("chcp 65001");
    system("cls");

    vector<string> nombres = {"Alejandra","Ariana","Mateo","Juan","Lucas","Marco","Pablo","Maria","Ruth","Jose"};
    vector<string> apellidos = {"Torrez","Salvatierra","Gironda","Gutierrez","Romero","Miranda","Escobar","Valeriano","Ruiz","Gomez"};
    vector<int> edades = GenerarEdades(10);

    int n = 0;
    cout << "Ingrese la cantidad de personas que desea generar: ";
    cin >> n;

    GenerarPersonas(nombres, apellidos, edades, n);

    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    int aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}
vector<int> GenerarEdades(int cantidad)
{
    vector<int> edades;
    for (int i = 0; i < cantidad; i++)
    {
        edades.push_back(GenerarAleatorio(1,90));
    }
    return edades;
}
void GenerarPersonas(vector<string> nombres, vector<string> apellidos, vector<int> edades, int n) {
    cout << "Las personas generadas son:\n";
    for (int i = 0; i < n; i++)
    {
        string nombre = nombres[GenerarAleatorio(0,9)];
        string apellido = apellidos[GenerarAleatorio(0,9)];
        int edad = edades[GenerarAleatorio(0,9)];

        cout << "Nombre : " << nombre << " " << apellido << ". Edad: " << edad << endl;
    }
}