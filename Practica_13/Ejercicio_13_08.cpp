// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>
#include <vector> // Necesario para usar vectores dinámicos
#include <ctime>  // Necesario para usar time(NULL) en los números aleatorios

using namespace std;

// Definición de la estructura Atleta según la guía oficial
struct Atleta 
{
    char nombre[30];
    char departamento[20];
    char deporte[20];
    int medallas;
};