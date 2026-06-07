// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct Pelicula 
{
    char titulo[40];
    char director[30];
    int duracion;
    int anio_estreno;
    char genero[30];
};

Pelicula CrearPelicula();
vector<Pelicula> IngresarPeliculas(int n);
void MostrarPorGenero(vector<Pelicula> listaPeliculas, char buscarGenero[30]);
void MostrarPorDirector(vector<Pelicula> listaPeliculas, char buscarDirector[30]);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Pelicula> listaPeliculas;
    
    char buscarGenero[30];
    char buscarDirector[30];

    cout << "SISTEMA DE GESTIÓN DE PELÍCULAS" << endl;
    cout << "===============================" << endl;
    
    cout << "Ingrese la cantidad de películas a registrar: ";
    cin >> n;
    cin.ignore(); 

    listaPeliculas = IngresarPeliculas(n);

    cout << "\n----------------------------------------------" << endl;
    cout << "Ingrese el GÉNERO que desea buscar: ";
    cin.getline(buscarGenero, 30);
    MostrarPorGenero(listaPeliculas, buscarGenero);

    cout << "\n----------------------------------------------" << endl;
    cout << "Ingrese el DIRECTOR que desea buscar: ";
    cin.getline(buscarDirector, 30);
    MostrarPorDirector(listaPeliculas, buscarDirector);

    return 0;
}

Pelicula CrearPelicula()
{
    Pelicula peli;
    
    cout << "Ingrese el título de la película: ";
    cin.getline(peli.titulo, 40);

    cout << "Ingrese el director: ";
    cin.getline(peli.director, 30);

    cout << "Ingrese la duración (en minutos): ";
    cin >> peli.duracion;

    cout << "Ingrese el año de estreno: ";
    cin >> peli.anio_estreno;
    cin.ignore(); 

    cout << "Ingrese el género: ";
    cin.getline(peli.genero, 30);

    return peli;
}

vector<Pelicula> IngresarPeliculas(int n)
{
    vector<Pelicula> peliculas;
    Pelicula peli; 

    for (int i = 1; i <= n; i++)
    {
        cout << "\nPELICULA " << i << endl;
        cout << "==========" << endl;
        peli = CrearPelicula();
        peliculas.push_back(peli);
    }
    return peliculas;
}
void MostrarPorGenero(vector<Pelicula> listaPeliculas, char buscarGenero[30])
{
    cout << "\nPELÍCULAS ENCONTRADAS DEL GÉNERO: " << buscarGenero << endl;
    cout << "----------------------------------------------" << endl;
    
    for (int i = 0; i < listaPeliculas.size(); i++)
    {
        if (strcmp(listaPeliculas[i].genero, buscarGenero) == 0) //Si strcmp da 0 significa que encontramos el género exacto
        {
            cout << "\tTítulo: " << listaPeliculas[i].titulo << endl;
            cout << "\tDirector: " << listaPeliculas[i].director << endl;
            cout << "\tDuración: " << listaPeliculas[i].duracion << " min" << endl;
            cout << "\tAño: " << listaPeliculas[i].anio_estreno << endl;
            cout << "----------------------------------------------" << endl;
        }
    }
}

void MostrarPorDirector(vector<Pelicula> listaPeliculas, char buscarDirector[30])
{
    cout << "\nPELÍCULAS ENCONTRADAS DEL DIRECTOR: " << buscarDirector << endl;
    cout << "----------------------------------------------" << endl;
    
    for (int i = 0; i < listaPeliculas.size(); i++)
    {

        if (strcmp(listaPeliculas[i].director, buscarDirector) == 0)
        {
            cout << "\tTítulo: " << listaPeliculas[i].titulo << endl;
            cout << "\tGénero: " << listaPeliculas[i].genero << endl;
            cout << "\tDuración: " << listaPeliculas[i].duracion << " min" << endl;
            cout << "\tAño: " << listaPeliculas[i].anio_estreno << endl;
            cout << "----------------------------------------------" << endl;
        }
    }
}