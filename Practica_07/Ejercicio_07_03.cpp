// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez.
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 06/04/2026

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double suma (vector<int> calificaciones, int n);
double promedio (double suma, int n);

vector<double> hallarDesviaciones (double prom, vector<int> calificaciones, int n);

double hallarVarianza (vector<double> desviaciones, int n);

int main ()
{
    system ("cls");
    int n;
    cout << "Ingrese la longitud del vector: " ;
    cin >> n;

    vector<int> calificaciones(n);

    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero de la posicion " << i  << " : ";
        cin >> calificaciones[i];
    }

    double sum = suma(calificaciones, n);
    cout << "La suma de las calificaciones es: " << sum  << endl; 

    double prom = promedio(sum, n);
    cout << "El promedio de las calificaciones es: " << prom << endl;

    vector<double> desviaciones = hallarDesviaciones(prom, calificaciones, n);
    cout << "Las desviaciones son: " << endl;
    for(double i : desviaciones)
    {
        cout << i << " ";
    }
    cout << endl;

    double varianza = hallarVarianza(desviaciones, n);
    cout << "La varianza de las calificaciones es: " << varianza << endl;
    return 0;
}

double suma (vector<int> calificaciones, int n)
{
    double s = 0.0;
    for(int i = 0; i < n; i++){
        s += calificaciones[i];
    }
    return s;
}

double promedio (double suma, int n)
{
    double prom = suma / n;
    return prom;
}

vector<double> hallarDesviaciones (double prom, vector<int> calificaciones, int n)
{
    vector<double> desviaciones(n);
    for(int i = 0; i < n; i++)
    {
        desviaciones[i] = calificaciones[i] - prom;
    }

    return desviaciones;
}

double hallarVarianza (vector<double> desviaciones, int n)
{
    double sumaCuadrados = 0.0;
    for(int i = 0; i < n; i++)
    {
        sumaCuadrados += pow(desviaciones[i], 2);
    }

    double varianza = sumaCuadrados / n;
    return varianza;
}