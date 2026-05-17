// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: Diana Ninoska Vasquez Benitez. 
// Fecha creación: 11/05/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> ClientesComun (vector<string> listaA, vector<string> listaB );
void MostrarVector ( vector <string> vecAux );

int main(){
    system("chcp 65001");
    system("cls");

    vector <string> listaA = {"Maria" ,"Juan" ,"Fernada" ,"Camila" ,"Damian" ,"Ana" ,"Joel" ,"Sebastian" ,"Alessandro" ,"Ricardo"};
    vector <string> listaB = {"Ricardo" ,"Juan" ,"Julia" ,"Mario" ,"Rosa" ,"Milton" ,"Edwin" ,"Carlos" ,"Camila" ,"Andrea"};
    vector <string> listaComunes ;

    listaComunes= ClientesComun(listaA,listaB);
    
    cout << "Lista de clientes A: " ;
    MostrarVector(listaA);
    cout << "Lista de clientes B: " ;
    MostrarVector(listaB);
    cout << endl ;
    cout << "Lista de clientes comunes: " ;
    MostrarVector(listaComunes);




    return 0;
}

vector <string> ClientesComun (vector<string> listaA, vector<string> listaB )
{
    vector <string> comunes;
    for (int i = 0; i < listaA.size(); i++)
    {
        for (int j = 0; j < listaB.size(); j++)
        {
            if (listaA[i] == listaB[j])
            {
                comunes.push_back(listaA[i]);
            }
        }      
    }
    
    return comunes;
}

void MostrarVector ( vector <string> vecAux )
{
    for (int i = 0; i < vecAux.size(); i++)
    {
        cout << vecAux[i];
        if (i < vecAux.size()-1) cout << " , ";
    }
    cout<< endl;
}