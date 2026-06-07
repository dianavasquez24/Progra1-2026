// Materia: Programación I, Paralelo 4
// Autor: Diana Ninoska Vasquez Benitez
// Carnet: 8913110
// Carrera del estudiante: Ing. Multimedia e Interactividad Digital
// Fecha creación: 22/05/2026

#include <iostream>
#include <vector> 

using namespace std;

struct Producto 
{
    char nombre[30];
    char codigo[15];
    float precio;
    int cantidad_en_inventario;
    char observaciones[50];
};

Producto CrearProducto();
vector<Producto> IngresarProductos(int n);
Producto ProductoMasCaro(vector<Producto> listaProductos);
int CalcularTotalProductos(vector<Producto> listaProductos);
void MostrarResultados(Producto elMasCaro, int cantidadTotal, vector<Producto> listaProductos);

int main() 
{
    system("chcp 65001");
    system("cls");

    int n = 0;
    vector<Producto> listaProductos;
    Producto elMasCaro;
    int cantidadTotal = 0;

    cout << "INVENTARIO DE PRODUCTOS" << endl;
    cout << "=======================" << endl;
    
    cout << "Ingrese la cantidad de productos a registrar: ";
    cin >> n;
    cin.ignore(); 

    listaProductos = IngresarProductos(n);

    elMasCaro = ProductoMasCaro(listaProductos);
    cantidadTotal = CalcularTotalProductos(listaProductos);

    MostrarResultados(elMasCaro, cantidadTotal, listaProductos);

    return 0;
}

Producto CrearProducto()
{
    Producto prod;
    
    cout << "Ingrese el nombre del producto: ";
    cin.getline(prod.nombre, 30);

    cout << "Ingrese el código: ";
    cin.getline(prod.codigo, 15);

    cout << "Ingrese el precio (decimal): ";
    cin >> prod.precio;

    cout << "Ingrese la cantidad en inventario: ";
    cin >> prod.cantidad_en_inventario;
    cin.ignore(); // Limpiamos el buffer del Enter

    //  Si es menor a 5, asignamos la advertencia letra por letra
    if (prod.cantidad_en_inventario < 5)
    {
        char mensaje[] = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        int j = 0;

        // Copiamos de forma segura hasta el fin de la cadena
        while (mensaje[j] != '\0')
        {
            prod.observaciones[j] = mensaje[j];
            j++;
        }
        prod.observaciones[j] = '\0'; // Le cerramos la cadena al producto
    }
    else
    {
        // Si tiene suficiente stock, se queda con un mensaje vacío y limpio
        prod.observaciones[0] = '-';
        prod.observaciones[1] = '\0';
    }

    return prod;
}

vector<Producto> IngresarProductos(int n)
{
    vector<Producto> productos;
    Producto prod; 

    for (int i = 1; i <= n; i++)
    {
        cout << "\nPRODUCTO " << i << endl;
        cout << "==========" << endl;
        prod = CrearProducto();
        productos.push_back(prod);
    }
    return productos;
}

Producto ProductoMasCaro(vector<Producto> listaProductos)
{
    Producto prodCaro = listaProductos[0];

    for (int i = 1; i < listaProductos.size(); i++)
    {
        if (listaProductos[i].precio > prodCaro.precio)
        {
            prodCaro = listaProductos[i];
        }
    }
    return prodCaro;
}

int CalcularTotalProductos(vector<Producto> listaProductos)
{
    int acumuladorTotal = 0;

    for (int i = 0; i < listaProductos.size(); i++)
    {
        acumuladorTotal = acumuladorTotal + listaProductos[i].cantidad_en_inventario;
    }
    return acumuladorTotal;
}

void MostrarResultados(Producto elMasCaro, int cantidadTotal, vector<Producto> listaProductos)
{
    cout << "\n==============================================" << endl;
    cout << "            REPORTE DE INVENTARIO             " << endl;
    cout << "==============================================" << endl;
    cout << "Cantidad total de productos en almacén: " << cantidadTotal << " unidades." << endl;
    cout << "----------------------------------------------" << endl;
    
    cout << "\nPRODUCTO MÁS CARO EN EL INVENTARIO:" << endl;
    cout << "\tCódigo: " << elMasCaro.codigo << endl;
    cout << "\tNombre: " << elMasCaro.nombre << endl;
    cout << "\tPrecio: Bs. " << elMasCaro.precio << endl;
    cout << "\tExistencias: " << elMasCaro.cantidad_en_inventario << endl;
    cout << "----------------------------------------------" << endl;

    cout << "\nLISTADO COMPLETO Y ALERTAS DE REPOSICIÓN:" << endl;
    for (int i = 0; i < listaProductos.size(); i++)
    {
        cout << "\t- " << listaProductos[i].nombre 
             << " [Cant: " << listaProductos[i].cantidad_en_inventario << "] " 
             << " -> Obs: " << listaProductos[i].observaciones << endl;
    }
    cout << "==============================================" << endl;
}