// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> ClientesComunes (vector<string> listaA, vector<string> listaB);
void MostrarVector ( vector<string> vector);

int main() {
    system("chcp 65001");
    system("cls");

    vector<string> listaA = {"Juan","Maria","Pedro","Ana","Luis"};
    vector<string> listaB = {"Ana","Carlos","Pedro","Sofia","Luis"};

    vector<string> comunes = ClientesComunes (listaA, listaB);

   cout << "Lista A: ";
    MostrarVector(listaA);

    cout << "Lista B: ";
    MostrarVector(listaB);

    cout << "Clientes en común: ";
    MostrarVector(comunes);

    return 0;
}

vector<string> ClientesComunes (vector<string> listaA, vector<string> listaB)
{
    vector<string> comunes;
    for (int i = 0; i < listaA.size(); i++)
    {
        for (int j = 0; j < listaB.size(); j++)
        {
            if (listaA[i] == listaB[j])
            {
                comunes.push_back(listaA[i]);
            }
        }
    }
    return comunes;
}

void MostrarVector(vector<string> vector  )
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i];
        if (i < vector.size()-1) cout << ", ";
    }
    cout << endl;
}
