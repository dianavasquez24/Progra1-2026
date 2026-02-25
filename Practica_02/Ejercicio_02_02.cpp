// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez 
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e interactividad digital. 
// Fecha creación: 23/02/2026 
#include <iostream>
using namespace std;

int main()
{
    int numero , suma=0, suma_par=0, suma_impar=0, suma_primos=0 , contador_divisores;
    system ("cls");

    do
    {
        cout << "Ingrese un numero (0 para terminar): ";cin >> numero;

        if (numero != 0)
        {
            suma+=numero;

            if (numero % 2 == 0)
            {
                suma_par+=numero;
            }
            else
            {
                suma_impar+=numero;
            }

            contador_divisores=0;

            for (int i = 1; i <= numero; i++)
            {
                if (numero % i ==0)
                {
                    contador_divisores++;
                }
            }
            if (contador_divisores == 2)
            {
                suma_primos+= numero;
            }
            
        }
        
    } while (numero != 0);
    
    cout<<"Suma de todos los numeros: "<<suma<<endl;
    cout<<"Suma de numeros pares: "<<suma_par<<endl;
    cout<<"Suma de numeros impares: "<<suma_impar<<endl;
    cout<<"Suma de numeros primos: "<<suma_primos<<endl;
    
    
    return 0;
}