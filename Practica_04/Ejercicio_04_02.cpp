// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

int obtenerMayor(int n1, int n2, int n3);

int main() {
    int a, b, c;
    system ("cls");

    cout << "--- DETERMINAR EL MAYOR DE TRES NUMEROS ---" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    int resultado = obtenerMayor(a, b, c);

    cout << "\nEl numero mayor es: " << resultado << endl;

    return 0;
}

int obtenerMayor(int n1, int n2, int n3)
{
    int mayor;
    
    if (n1 >= n2 && n1 >= n3) {
        mayor = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        mayor = n2;
    } else {
        mayor = n3;
    }
    
    return mayor;
}