// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e interactividad digital.
// Fecha creación: 27/03/20

#include <iostream>
using namespace std;

double calcularArea(double lado);
double calcularArea(double base, double altura);
float  calcularArea(float radio, float PI);

int main (){
    system("cls");
    
    double lado, base, altura;
    float radio;
    const float PI = 3.14159;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    cout << "Area del cuadrado: " << calcularArea(lado) << endl;

    cout << "\nIngrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    cout << "Area del rectangulo: " << calcularArea(base, altura) << endl;
    
    
    cout << "\nIngrese el radio del circulo: ";
    cin >> radio;
    cout << "Area del circulo: " << calcularArea(radio, PI) << endl;

    return 0;
    }

double calcularArea(double lado)
{
    return lado * lado;
}

double calcularArea(double base, double altura)
{
    return base * altura;
}

float calcularArea(float radio, float PI)
{
    return PI * radio * radio;
}

