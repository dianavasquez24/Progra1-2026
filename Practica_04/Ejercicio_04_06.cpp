// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;


int calcularSumatoria(int n);

int main() {
    int limite;
    system ("cls");

    cout << "Ingrese un numero entero positivo: ";
    cin >> limite;

    if (limite > 0) {
        int resultado = calcularSumatoria(limite);
        cout << "\nLa suma de los numeros del 1 al " << limite << " es: " << resultado << endl;
    } else {
    cout << "\nError: Por favor ingrese un numero mayor a 0." << endl;
    }

    return 0;
}

int calcularSumatoria(int n) {
    int suma = 0; 
    
    for (int i = 1; i <= n; i++) 
    {
        suma = suma + i;
    }
    
    return suma;
}