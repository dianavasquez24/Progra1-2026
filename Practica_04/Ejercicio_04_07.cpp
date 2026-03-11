// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

float calcularDistancia(float v, float t);

int main() {
    float velocidad, tiempo;
    system ("cls");
    cout << "--- CALCULO DE DISTANCIA (MRU) ---" << endl;
    cout << "Ingrese la velocidad constante (m/s): ";cin >> velocidad;
    cout << "Ingrese el tiempo (s): ";cin >> tiempo;

    cout << "\nLa distancia recorrida es: " << calcularDistancia(velocidad, tiempo) << " metros." << endl;

    return 0;
}
float calcularDistancia(float v, float t)
{
    float d = v * t;
    return d;
}