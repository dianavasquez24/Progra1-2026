// Materia: Programación I, Paralelo 4
// Autor : Diana Ninoska Vasquez Benitez
// Carnet: 8913110.
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital.
// Fecha creación: 13/04/2026

#include <iostream>

using namespace std;

const int filas = 3;
const int columnas = 4;

void MostrarMatriz(char Matriz[filas][columnas]);
void FilasColumnasLibres(char Matriz[filas][columnas], int &filasLibres, int &columnasLibres);
void GuardarCoordenadas(char Matriz[filas][columnas], int vectorFilas[], int vectorColumnas[], int &cantidadMuertos);
int ContarMuertos(char Matriz[filas][columnas]);

int main() {
    system("chcp 65001");
    system ("cls");
    char Matriz[filas][columnas] =
    {
        {'x','o','x','o'},
        {'o','o','o','o'},
        {'o','o','x','o'}
    };

    int filasLibres = 0, columnasLibres = 0;                   
    int vectorFilas[filas*columnas], vectorColumnas[filas*columnas];   // tamño del vector, todas las posiciones que existen en la matriz
    int cantidadMuertos = 0;

    cout << "a) Mostrar matriz:" << endl;
    MostrarMatriz(Matriz);

    FilasColumnasLibres(Matriz, filasLibres, columnasLibres);

    cout << "\nb) Filas libres: " << filasLibres << endl;
    cout << "   Columnas libres: " << columnasLibres << endl;

    GuardarCoordenadas(Matriz, vectorFilas, vectorColumnas, cantidadMuertos);

    cout << "\nc) Posiciones de muertos vivientes:" << endl;
    for (int i = 0; i < cantidadMuertos; i++)   // Recorre las posiciones de los vectores paralelos
    {
        cout << vectorFilas[i] << " -- " << vectorColumnas[i] << endl;
    }

    int totalMuertos = ContarMuertos(Matriz);
    cout << "\nd) Total muertos vivientes: " << totalMuertos << endl;

    int muertosPrimeraColumna = 0;          //contador
    for (int i = 0; i < filas; i++)
    {
        if (Matriz[i][0] == 'x') muertosPrimeraColumna++;
    }
    if (muertosPrimeraColumna >= 2)
    {
        cout << "\ne) No es posible entrar al complejo!" << endl;
        cout << endl ;
    }
    else
    {
        cout << "\ne) Es posible entrar al complejo!" << endl;
        cout << endl ;
    }

    return 0;
}

void MostrarMatriz(char Matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void FilasColumnasLibres(char Matriz[filas][columnas], int &filasLibres, int &columnasLibres)
{
    filasLibres = 0;
    columnasLibres = 0;

    for (int i = 0; i < filas; i++)
    {
        int contadorF = 0;          // empieza en cero para cada fila 
        for (int j = 0; j < columnas; j++)          
        {
            if (Matriz[i][j] == 'x') contadorF++;       // si encontramos un muerto , sumamos al contador entonces..
        }
        if (contadorF == 0) filasLibres++;          // si hay muertos en el contador ya no esta libre
    }

    for (int j = 0; j < columnas; j++)
    {
        int contadorC = 0;         // reinicia en cada columna
        for (int i = 0; i < filas; i++)
        {
            if (Matriz[i][j] == 'x') contadorC++;   // si encontramos un muerto , sumamos al contador entonces..

        }
        if (contadorC == 0) columnasLibres++;       // si hay muertos en el contador ya no esta libre
    }
}

void GuardarCoordenadas(char Matriz[filas][columnas], int vectorFilas[], int vectorColumnas[], int &cantidadMuertos)
{
    cantidadMuertos= 0;
    for (int i = 0; i < filas; i++)
    {                                       //recorre la matriz
        for (int j = 0; j < columnas; j++)
        {
            if (Matriz[i][j] == 'x')
            {
                vectorFilas[cantidadMuertos] = i;      // guarda la fila en la que fue encontrado un muerto , cantidad de muertos lo usamos para llenar en la posicion del vector 
                vectorColumnas[cantidadMuertos] = j;   // guarada en la columna 
                cantidadMuertos++;                      // aumenta la cantidad de muertos encontrados
            }
        }
    }
}

int ContarMuertos(char Matriz[filas][columnas])
{
    int contadorMuertos = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (Matriz[i][j] == 'x') contadorMuertos++;
        }
    }
    return contadorMuertos;
}