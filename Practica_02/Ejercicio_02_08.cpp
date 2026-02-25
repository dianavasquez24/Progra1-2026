//  Materia: Programación I, Paralelo 4
//  Autor: Diana Ninoska Vasquez Benitez
//  Carnet: 8913110
//  Carrera del estudiante:Ing. Multimedia e interactividad digital 
//  Fecha creación: 23/02/2026

#include <iostream>

using namespace std;
int main()
{
    float precio , total=0 , monto_final =0 , IVA = 0, total_con_iva=0 ;
    system ("cls");
    
    cout << "--- Registro de Ventas 'La Estrella' ---" << endl;
    cout << "(Ingrese 0 para finalizar el registro)" << endl;

    do
    {
        cout << "Ingresar precio del producto: "; cin>> precio;

        if (precio >0)
        {
            total+= precio;
        }

    } while (precio != 0);
    IVA = total * 0.13;
    total_con_iva= total + IVA ;
    monto_final= total_con_iva;

    if (total_con_iva > 2500)
     {
        monto_final = total_con_iva -(total_con_iva*0.05);
        cout << "\nSe aplico un descuendo del 5% "<< endl;
     }

    cout << "\nVentas totales (sin IVA): " << total << " Bs." << endl;
    cout << "IVA (13%) a pagar: " << IVA << " Bs." << endl;
    cout << "Monto total facturado: " << monto_final << " Bs." << endl;

    return 0;
}