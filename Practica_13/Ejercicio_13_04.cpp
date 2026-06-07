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
    char genero[10]; 
    float salario;   
};

Empleado CrearEmpleado();
vector<Empleado> IngresarEmpleados(int n);
void BuscarMenorYMayorSalario(vector<Empleado> listaEmpleados, Empleado &elMenor, Empleado &elMayor);
void MostrarResultados(Empleado elMenor, Empleado elMayor);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Empleado> listaEmpleados;
    Empleado elMenor;
    Empleado elMayor;

    cout << "PERSONAL DE LA UCB" << endl;
    cout << "==================" << endl;
    
    cout << "Ingrese la cantidad de empleados a registrar: ";
    cin >> n;
    cin.ignore(); 

    listaEmpleados = IngresarEmpleados(n);

    BuscarMenorYMayorSalario(listaEmpleados, elMenor, elMayor);

    MostrarResultados(elMenor, elMayor);

    return 0;
}

Empleado CrearEmpleado()
{
    Empleado empleado;
    
    cout << "Ingrese el nombre del empleado: ";
    cin.getline(empleado.nombre, 30);

    cout << "Ingrese el género del empleado: ";
    cin.getline(empleado.genero, 10);

    cout << "Ingrese el salario (decimal): ";
    cin >> empleado.salario;
    cin.ignore(); 

    return empleado;
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

void BuscarMenorYMayorSalario(vector<Empleado> listaEmpleados, Empleado &elMenor, Empleado &elMayor)
{
    elMenor = listaEmpleados[0];
    elMayor = listaEmpleados[0];

    for (int i = 1; i < listaEmpleados.size(); i++)
    {
        if (listaEmpleados[i].salario < elMenor.salario)
        {
            elMenor = listaEmpleados[i];
        }
        
        if (listaEmpleados[i].salario > elMayor.salario)
        {
            elMayor = listaEmpleados[i];
        }
    }
}

void MostrarResultados(Empleado elMenor, Empleado elMayor)
{
    cout << "\n==============================================" << endl;
    cout << "            REPORTE DE SALARIOS UCB           " << endl;
    cout << "==============================================" << endl;

    cout << "\nEMPLEADO CON MENOR SALARIO:" << endl;
    cout << "\tNombre: " << elMenor.nombre << endl;
    cout << "\tGénero: " << elMenor.genero << endl;
    cout << "\tSalario: Bs. " << elMenor.salario << endl;
    cout << "----------------------------------------------" << endl;

    cout << "\nEMPLEADO CON MAYOR SALARIO:" << endl;
    cout << "\tNombre: " << elMayor.nombre << endl;
    cout << "\tGénero: " << elMayor.genero << endl;
    cout << "\tSalario: Bs. " << elMayor.salario << endl;
    cout << "==============================================" << endl;
}