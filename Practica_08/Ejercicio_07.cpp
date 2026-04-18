// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
using namespace std;

void EliminarDigitos(string cadena);

int main() {
    system ("65001");
    system("cls");
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    EliminarDigitos(cadena);

    return 0;
}

void EliminarDigitos(string cadena) 
{
    string resultado = "";

    for (int i = 0; i < cadena.size(); i++)
    {
        char letra = cadena[i];
        if (letra >= '0' && letra <= '9')   // verificar si la letra esta entre el 0 al 9
        {}
        else
        {
            resultado += letra;     // agregar si no es asi 
        }
    }

    cout << "Cadena sin digitos: " << resultado << endl;
}