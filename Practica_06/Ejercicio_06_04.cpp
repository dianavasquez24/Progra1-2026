// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>
using namespace std;
    
float CalcularPrecioTotal(float precioBase, float impuesto = 13);

int main() {
    float precio = 0, precioTotal = 0;
    system ("cls");

    cout << "Ingrese el precio base del producto: ";
    cin >> precio;

    precioTotal = CalcularPrecioTotal(precio);

    cout << "\tPrecio total con IVA: " << precioTotal << endl;

    return 0;
}

float CalcularPrecioTotal(float precioBase, float impuesto) {
    double total;
    total = precioBase + (precioBase * impuesto / 100);
    return total;
}