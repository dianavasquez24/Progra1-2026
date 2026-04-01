// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>

using namespace std;

void agregarNota(float &sumaTotal, int &cantidadNotas, float nuevaNota);

int main() {
    int n;
    int cantidadNotas = 0;
    float sumaTotal = 0;
    float nota;
    system ("cls");

    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese la nota " << i  << ": ";
        cin >> nota;

        agregarNota(sumaTotal, cantidadNotas, nota);
    }

    cout << "\nCantidad de notas: " << cantidadNotas << endl;
    cout << "Suma total de notas: " << sumaTotal << endl;

    return 0;
}

void agregarNota(float &sumaTotal, int &cantidadNotas, float nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas++;
}