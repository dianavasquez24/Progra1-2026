// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

float convertir(float bs, float tipo_cambio);

int main() {
    float monto_bs, c_oficial, c_paralelo;
    system ("cls");

    cout << "--- CONVERSOR DE DIVISAS ---" << endl;
    cout << "Ingrese la cantidad en Bolivianos: ";
    cin >> monto_bs;
    
    cout << "Ingrese el tipo de cambio oficial: ";
    cin >> c_oficial;
    
    cout << "Ingrese el tipo de cambio paralelo: ";
    cin >> c_paralelo;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Monto en Bs: " << monto_bs << endl;
    cout << "\nCambio a dolares:"<< endl;
    cout << "\tCambio Oficial: " << convertir(monto_bs, c_oficial) << endl;
    cout << "\tCambio Paralelo: " << convertir(monto_bs, c_paralelo) << endl;

    return 0;
}

float convertir(float bs, float tipo_cambio)
{
    float dolares = bs / tipo_cambio;
    return dolares;
}
