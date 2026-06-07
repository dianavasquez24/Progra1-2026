// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>

using namespace std;

struct Libro 
{
    char titulo[40];
    char autor[40];
    int anio_publicacion;
    bool disponible;
};

void RegistrarLibro(Libro &libros);
void MostrarLibro(Libro libros);

int main() 
{
    system("chcp 65001");
    system("cls");
    Libro libros;

    RegistrarLibro(libros);
    MostrarLibro(libros);
    
    return 0;
}

void RegistrarLibro(Libro &libros) 
{
    int opcionDisponible = 0;

    cout << "REGISTRO DE BIBLIOTECA" << endl;
    cout << "======================" << endl;

    cout << "Ingrese el titulo del libro: ";
    cin.getline(libros.titulo, 50);

    cout << "Ingrese el autor del libro: ";
    cin.getline(libros.autor, 50);

    cout << "Ingrese el año de publicación: ";
    cin >> libros.anio_publicacion;

    cout << "¿El libro esta disponible? (1 = Si, 0 = No): ";
    cin >> opcionDisponible;
    
    if (opcionDisponible == 1) 
    {
        libros.disponible = true;
    } 
    else 
    {
        libros.disponible = false;
    }

    cin.ignore(); 
}
void MostrarLibro(Libro libros) 
{
    cout << "\nDATOS DEL LIBRO REGISTRADO" << endl;
    cout << "==========================" << endl;
    cout << "\tTitulo: " << libros.titulo << endl;
    cout << "\tAutor: " << libros.autor << endl;
    cout << "\tAño de publicacion: " << libros.anio_publicacion << endl;
    
    cout << "\tEstado: ";
    if (libros.disponible) 
    {
        cout << "Disponible" << endl;
    } 
    else 
    {
        cout << "No disponible" << endl;
    }
}