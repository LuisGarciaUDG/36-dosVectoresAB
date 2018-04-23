/*
Programa_36 capturar 2 vectores A B de tamaño 5 sumarlos e imprimirlos
Estructura for y arreglos
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 11 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system ("color f0");
    int x, A[5], B[5], C[5];

    cout << "\n Resultado de la suma de dos vectores";
    cout << "\n\n Estructura repetitiva for \n";

    cout<<"\n Elementos del vector A: \n";

    for (x=0; x<5; x=x+1)
        {
        cout<<"\n Dame un valor: ";
        cin>>A[x];
        }

        cout<<"\n\n";
        system ("pause");
        system ("cls");

    cout<<"\n Elementos del vector B: \n";

    for (x=0; x<5; x=x+1)
        {
        cout<<"\n Dame un valor: ";
        cin>>B[x];
        }

        cout<<"\n\n";
        system ("pause");
        system ("cls");


    for (x=0; x<5; x=x+1)
        {
        C[x]=A[x]+B[x];
        }

    cout<<"\n\n Los vectores resultantes son: \n\n";

    for (x=0; x<5; x=x+1)
        {
        cout<<"\t A: "<<A[x]<<"\t + "<<"\t B: "<<B[x]<<"\t = C : "<<C[x]<<"\n\n";
        }

        cout<<"\n\n";
        system ("pause");

    return 0;
}
