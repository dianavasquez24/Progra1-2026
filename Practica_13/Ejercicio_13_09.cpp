// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

// Materia: Programación I, Paralelo 4
// Autor: 
// Fecha creación: 22/05/2026
// Detalle: Cálculo de notas finales ponderadas, promedios, nota mínima y máxima del curso.

#include <iostream>
#include <vector> // Necesario para usar vectores dinámicos

using namespace std;

struct Alumno 
{
    char nombre[30];
    float t1;
    float t2;
    float t3;
    float t4;
    float ef;
    float nf; 
};

Alumno CrearAlumno();
vector<Alumno> IngresarAlumnos(int n);
void CalcularEstadisticas(vector<Alumno> listaAlumnos, Alumno &elMinimo, Alumno &elMaximo, float &promedioCurso);
void MostrarReporte(vector<Alumno> listaAlumnos, Alumno elMinimo, Alumno elMaximo, float promedioCurso);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Alumno> listaAlumnos;
    
    Alumno elMinimo;
    Alumno elMaximo;
    float promedioCurso = 0;

    cout << "SISTEMA DE CALIFICACIONES DE ALUMNOS" << endl;
    cout << "====================================" << endl;
    
    cout << "Ingrese la cantidad de alumnos del curso: ";
    cin >> n;
    cin.ignore(); 

    listaAlumnos = IngresarAlumnos(n);

    CalcularEstadisticas(listaAlumnos, elMinimo, elMaximo, promedioCurso);

    MostrarReporte(listaAlumnos, elMinimo, elMaximo, promedioCurso);

    return 0;
}

Alumno CrearAlumno()
{
    Alumno alu;
    
    cout << "Ingrese el nombre del alumno: ";
    cin.getline(alu.nombre, 30);

    cout << "Ingrese la nota parcial T1: ";
    cin >> alu.t1;
    cout << "Ingrese la nota parcial T2: ";
    cin >> alu.t2;
    cout << "Ingrese la nota parcial T3: ";
    cin >> alu.t3;
    cout << "Ingrese la nota parcial T4:";
    cin >> alu.t4;
    cout << "Ingrese la nota del Examen Final (EF): ";
    cin >> alu.ef;
    cin.ignore(); // Limpiamos el buffer del Enter para el siguiente getline

    float np = (alu.t1 + alu.t2 + alu.t3 + alu.t4) / 4.0; // Nota de presentación
    alu.nf = (0.7 * np) + (0.3 * alu.ef);                  // Nota final ponderada

    cout << "\tNota Final : " << alu.nf << endl;

    return alu;
}

vector<Alumno> IngresarAlumnos(int n)
{
    vector<Alumno> alumnos;
    Alumno alu; 

    for (int i = 1; i <= n; i++)
    {
        cout << "\nALUMNO " << i << endl;
        cout << "==========" << endl;
        alu = CrearAlumno();
        alumnos.push_back(alu);
    }
    return alumnos;
}

void CalcularEstadisticas(vector<Alumno> listaAlumnos, Alumno &elMinimo, Alumno &elMaximo, float &promedioCurso)
{
    elMinimo = listaAlumnos[0];
    elMaximo = listaAlumnos[0];
    
    float sumaNotas = 0;

    for (int i = 0; i < listaAlumnos.size(); i++)
    {
        sumaNotas = sumaNotas + listaAlumnos[i].nf; //acumular para el promedio

        if (listaAlumnos[i].nf < elMinimo.nf)
        {
            elMinimo = listaAlumnos[i];
        }
        
        if (listaAlumnos[i].nf > elMaximo.nf)
        {
            elMaximo = listaAlumnos[i];
        }
    }

    promedioCurso = sumaNotas / listaAlumnos.size();
}

void MostrarReporte(vector<Alumno> listaAlumnos, Alumno elMinimo, Alumno elMaximo, float promedioCurso)
{
    cout << "\n==============================================" << endl;
    cout << "          REPORTE DE CALIFICACIONES           " << endl;
    cout << "==============================================" << endl;
    
    cout << "LISTA DE NOTAS FINALES DEL CURSO:" << endl;
    for (int i = 0; i < listaAlumnos.size(); i++)
    {
        cout << "\t- " << listaAlumnos[i].nombre << " \t-> Nota Final: " << listaAlumnos[i].nf << endl;
    }
    
    cout << "----------------------------------------------" << endl;
    cout << "PROMEDIO GENERAL DEL CURSO : " << promedioCurso << " pts." << endl;
    cout << "----------------------------------------------" << endl;

    cout << "ALUMNO CON LA CALIFICACIÓN MÁS BAJA:" << endl;
    cout << "\tNombre: " << elMinimo.nombre << endl;
    cout << "\tNota Final: " << elMinimo.nf << " pts." << endl;
    cout << "----------------------------------------------" << endl;

    cout << "ALUMNO CON LA CALIFICACIÓN MÁS ALTA:" << endl;
    cout << "\tNombre: " << elMaximo.nombre << endl;
    cout << "\tNota Final: " << elMaximo.nf << " pts." << endl;
    cout << "==============================================" << endl;
}