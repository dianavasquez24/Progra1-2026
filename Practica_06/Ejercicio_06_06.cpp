// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>

using namespace std;


void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main() {
    int totalSegundos;
    int horas = 0, minutos = 0, segundos = 0;
    system ("cls");

    cout << "Ingrese el total de segundos: ";
    cin >> totalSegundos;

    calcularTiempo(totalSegundos, horas, minutos, segundos);

    cout << "La hora con minutos y segundos es: : " << endl;
    cout << "\n\t " << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}
