// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

const float PI = 3.141592;

float calcularVolumenCilindro(float r, float h);

int main() {
    float radio, altura;
    system ("cls");

    cout << "--- VOLUMEN DE UN CILINDRO ---" << endl;
    cout << "Ingrese el radio: ";
    cin >> radio;
    cout << "Ingrese la altura: ";
    cin >> altura;

    cout << "\nEl volumen el cilindro es: " << calcularVolumenCilindro(radio, altura) << endl;

    return 0;
}

float calcularVolumenCilindro(float r, float h) 
{   float volumen = 0.0;
    volumen = PI * r * r * h;
    return volumen;
}