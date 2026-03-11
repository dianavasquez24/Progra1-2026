// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

float calcularAreaTriangulo(float base, float altura);

int main() {
    float b, h;
    system ("cls");

    cout << "--- AREA DE UN TRIANGULO ---" << endl;
    cout << "Ingrese la base: ";
    cin >> b;
    cout << "Ingrese la altura: ";
    cin >> h;

    cout << "\nEl area del triangulo es: " << calcularAreaTriangulo(b, h) << endl;

    return 0;
}

float calcularAreaTriangulo(float base, float altura)
{
    float resultado = 0.0;
    resultado =(base * altura) / 2;
    return resultado;
}