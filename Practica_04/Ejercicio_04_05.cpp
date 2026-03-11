// Materia: Programación I, Paralelo 4 
// Autor:Diana NInoska Vasquez Benitez.
// Carnet:8913110. 
// Carrera del estudiante: Ing. Multimedia e interactividad digital 
// Fecha creación: 04/03/2026 

#include <iostream>

using namespace std;

bool esPar (int n);

int main (){
    int n;
    system("cls");

    cout << "Ingrese un numero: " ;
    cin >> n;

    bool par = esPar(n);
    if(par){
        cout << "\nEs un numero par" << endl;
    } else {
        cout << "\nEs un numero impar" << endl;
    }
}
 bool esPar (int n){
    bool p = true;

    if(n % 2 == 0){
        p = true;
    } else {
        p = false;
    }
    return p;
}