// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>
#include <vector> 

using namespace std;

struct Atleta 
{
    char nombre[30];
    char pais[30];
    int edad;
    int mejor_tiempo; 
};

Atleta CrearAtleta();
vector<Atleta> IngresarAtletas(int n);
Atleta AtletaMejorTiempo(vector<Atleta> listaAtletas);
void MostrarMejorTiempo(Atleta atleta);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Atleta> listaAtletas;
    Atleta elMejor;

    cout << "DATOS DE ATLETAS" << endl;
    cout << "================" << endl;
    
    cout << "Ingrese la cantidad de atletas a registrar: ";
    cin >> n;
    cin.ignore();

    listaAtletas = IngresarAtletas(n);

    elMejor = AtletaMejorTiempo(listaAtletas);
    cout << "\n----------------------------------------------" ;
    MostrarMejorTiempo(elMejor);

    return 0;
}

Atleta CrearAtleta()
{
    Atleta atleta;
    
    cout << "Ingrese el nombre del atleta: ";
    cin.getline(atleta.nombre, 30);

    cout << "Ingrese el país del atleta: ";
    cin.getline(atleta.pais, 30);

    cout << "Ingrese la edad: ";
    cin >> atleta.edad;

    cout << "Ingrese el mejor tiempo (en segundos): ";
    cin >> atleta.mejor_tiempo;
    
    cin.ignore(); 
    return atleta;
}
vector<Atleta> IngresarAtletas(int n)
{
    vector<Atleta> atletas;
    Atleta Atleta;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nATLETA " << i << endl;
        cout << "=========" << endl;
        Atleta = CrearAtleta();
        atletas.push_back(Atleta);
    }
    return atletas;
}
Atleta AtletaMejorTiempo(vector<Atleta> listaAtletas)
{
    Atleta atletaMejor = listaAtletas[0]; // Temporalmente se asume que el primero es el mjor 

    for (int i = 1; i < listaAtletas.size(); i++)
    {
        if (listaAtletas[i].mejor_tiempo < atletaMejor.mejor_tiempo)
        {
            atletaMejor = listaAtletas[i];
        }
    }
    return atletaMejor;
}
void MostrarMejorTiempo(Atleta elMejor)
{
    cout << "\nATLETA CON EL MEJOR TIEMPO" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "\tNombre: " << elMejor.nombre << endl;
    cout << "\tPaís: " << elMejor.pais << endl;
    cout << "\tTiempo: " << elMejor.mejor_tiempo << " segundos" << endl;
}