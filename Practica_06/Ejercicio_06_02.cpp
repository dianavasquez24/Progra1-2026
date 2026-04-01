// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>

using namespace std;
const double PI = 3.14159;

float CalcularVolumen(float radio, float altura = 10);

int main ()
{
    float radio = 0;
    double volumen = 0;
    system("cls");

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    volumen = CalcularVolumen(radio);

    cout << "\nEl volumen del cilindro es: " << volumen << endl;

    return 0;
}

float CalcularVolumen(float radio, float altura)
{
    float resultado = PI * radio * radio * altura;
    return resultado;
}
