// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);

vector<double> GenerarVoltajes(int n);
vector<double> GenerarTemperaturas(int n);
vector<char>   GenerarAlfanumericos(int n);
vector<int>    GenerarAnios(int n);
vector<double> GenerarVelocidades(int n);
vector<double> GenerarDistancias(int n);

void DesplegarVector(const vector<double>& lista);
void DesplegarVector(const vector<int>& lista);
void DesplegarVector(const vector<char>& lista);

int main()
{
    srand(time(NULL));
    system("cls");

    cout << "Voltajes:\n";
    DesplegarVector(GenerarVoltajes(100));

    cout << "\n\nTemperaturas:\n";
    DesplegarVector(GenerarTemperaturas(50));

    cout << "\n\nCaracteres alfanumericos:\n";
    DesplegarVector(GenerarAlfanumericos(30));

    cout << "\n\nAnios:\n";
    DesplegarVector(GenerarAnios(100));

    cout << "\n\nVelocidades:\n";
    DesplegarVector(GenerarVelocidades(32));

    cout << "\n\nDistancias:\n";
    DesplegarVector(GenerarDistancias(1000));

    return 0;
}

// ================= FUNCIONES =================

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

// a) Voltajes 20.00 – 220.00
vector<double> GenerarVoltajes(int n)
{
    vector<double> voltajes;
    for (int i = 0; i < n; i++)
    {
        double valor = GenerarAleatorio(20, 220) + GenerarAleatorio(0, 99) / 100.0;
        voltajes.push_back(valor);
    }
    return voltajes;
}

// b) Temperaturas 0.00 – 100.00
vector<double> GenerarTemperaturas(int n)
{
    vector<double> temperaturas;
    for (int i = 0; i < n; i++)
    {
        double valor = GenerarAleatorio(0, 100) + GenerarAleatorio(0, 99) / 100.0;
        temperaturas.push_back(valor);
    }
    return temperaturas;
}

// c) Caracteres alfanumericos
vector<char> GenerarAlfanumericos(int n)
{
    vector<char> c;
    for (int i = 0; i < n; i++)
    {
        int tipo = GenerarAleatorio(1, 3);

        if (tipo == 1)        // Mayusculas
            c.push_back(char(GenerarAleatorio(65, 90)));
        else if (tipo == 2)   // Minusculas
            c.push_back(char(GenerarAleatorio(97, 122)));
        else                  // Numeros
            c.push_back(char(GenerarAleatorio(48, 57)));
    }
    return c;
}

// d) Años 1990 – 2025
vector<int> GenerarAnios(int n)
{
    vector<int> anios;
    for (int i = 0; i < n; i++)
        anios.push_back(GenerarAleatorio(1990, 2025));
    return anios;
}

// e) Velocidades 10.00 – 300.00
vector<double> GenerarVelocidades(int n)
{
    vector<double> velocidades;
    for (int i = 0; i < n; i++)
    {
        double valor = GenerarAleatorio(10, 300) + GenerarAleatorio(0, 99) / 100.0;
        velocidades.push_back(valor);
    }
    return velocidades;
}

// f) Distancias 1.00 – 1000.00
vector<double> GenerarDistancias(int n)
{
    vector<double> distancias;
    for (int i = 0; i < n; i++)
    {
        double valor = GenerarAleatorio(1, 1000) + GenerarAleatorio(0, 99) / 100.0;
        distancias.push_back(valor);
    }
    return distancias;
}

// ================= DESPLIEGUE =================

void DesplegarVector(const vector<double>& lista)
{
    for (size_t i = 0; i < lista.size(); i++)
        cout << lista[i] << "\t";
}

void DesplegarVector(const vector<int>& lista)
{
    for (size_t i = 0; i < lista.size(); i++)
        cout << lista[i] << "\t";
}

void DesplegarVector(const vector<char>& lista)
{
    for (size_t i = 0; i < lista.size(); i++)
        cout << lista[i] << "\t";
}