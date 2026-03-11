// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

int contarDigitos(int n) ;

int main() {
    int numero;
     system ("cls");

    cout << "--- CONTADOR DE DIGITOS ---" << endl;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero == 0) {
        cout << "El numero 0 tiene: 1 digito." << endl;
    } 
    else if (numero > 0)
    {
        cout << "El numero tiene: " <<  contarDigitos(numero) << " digitos." << endl;
    } 
    else 
    {
        cout << "Error: El numero debe ser positivo." << endl;
    }

    return 0;
}

int contarDigitos(int n)
{
    int contador = 0;

    while (n > 0)
    {
        n = n / 10;
        contador++;
    }
    
    return contador;
}

