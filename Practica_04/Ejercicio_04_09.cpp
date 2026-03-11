// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

float calcularPromedio(float n1, float n2);

int main() {
    float nota1, nota2;
    system ("cls");
    
    cout << "--- PROMEDIO DE CALIFICACIONES ---" << endl;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    if ((nota1 >= 0 && nota1 <= 100) && (nota2 >= 0 && nota2 <= 100)) 
    {
        float resultado = calcularPromedio(nota1, nota2);
        cout << "\nEl promedio de las calificaciones es: " << calcularPromedio(nota1, nota2) << endl;
    }
    else
    {
        cout << "\nError: Las notas ingresadas deben estar en el rango de 0 a 100." << endl;
    }
    return 0;
}

float calcularPromedio(float n1, float n2) 
{
    float promedio = 0.0;
    promedio = (n1 + n2) / 2;
    return promedio;
}

