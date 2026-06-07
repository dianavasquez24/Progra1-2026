// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>
#include <vector>

using namespace std;

struct Empleado 
{
    char nombre[30];
    int id;
    float sueldo;
    int antiguedad;
};

Empleado CrearEmpleado();
vector<Empleado> IngresarEmpleados(int n);
int SueldosMayores(vector<Empleado> listaEmpleados, float sueldoLimite);
float PromedioAntiguedad(vector<Empleado> listaEmpleados);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Empleado> listaEmpleados;
    float sueldoLimite = 0;

    cout << "GESTIÓN DE EMPLEADOS CON FUNCIONES" << endl;
    cout << "==================================" << endl;
    
    cout << "Ingrese la cantidad de empleados a registrar: ";
    cin >> n;
    cin.ignore(); 

    listaEmpleados = IngresarEmpleados(n);

    cout << "\n----------------------------------------------" << endl;
    cout << "Ingrese un valor de sueldo para verificar el límite : ";
    cin >> sueldoLimite;

    int cantidadMayores = SueldosMayores(listaEmpleados, sueldoLimite);
    float promedioAntiguedad = PromedioAntiguedad(listaEmpleados);

    cout << "\n==============================================" << endl;
    cout << "\tCantidad de empleados con sueldo mayor a:  " << sueldoLimite << ": " << cantidadMayores << endl;
    cout << "\tPromedio de antigüedad de todo el personal: " << promedioAntiguedad << " años" << endl;
    cout << "==============================================" << endl;

    return 0;
}

Empleado CrearEmpleado()
{
    Empleado emp;
    
    cout << "Ingrese el nombre del empleado: ";
    cin.getline(emp.nombre, 30);

    cout << "Ingrese el ID: ";
    cin >> emp.id;

    cout << "Ingrese el sueldo : ";
    cin >> emp.sueldo;

    cout << "Ingrese la antigüedad (en años): ";
    cin >> emp.antiguedad;
    cin.ignore(); 

    return emp;
}

vector<Empleado> IngresarEmpleados(int n)
{
    vector<Empleado> empleados;
    Empleado emp; 

    for (int i = 1; i <= n; i++)
    {
        cout << "\nEMPLEADO " << i << endl;
        cout << "==========" << endl;
        emp = CrearEmpleado();
        empleados.push_back(emp);
    }
    return empleados;
}

int SueldosMayores(vector<Empleado> listaEmpleados, float sueldoLimite)
{
    int contador = 0;

    for (int i = 0; i < listaEmpleados.size(); i++)
    {
        if (listaEmpleados[i].sueldo > sueldoLimite)
        {
            contador++;
        }
    }
    return contador;
}

float PromedioAntiguedad(vector<Empleado> listaEmpleados)
{
    float sumaAntiguedad = 0.0; 

    // Sumamos la antigüedad de cada uno
    for (int i = 0; i < listaEmpleados.size(); i++)
    {
        sumaAntiguedad = sumaAntiguedad + listaEmpleados[i].antiguedad;
    }

    if (listaEmpleados.size() == 0) 
    {
        return 0;
    }

    return sumaAntiguedad / listaEmpleados.size();
}