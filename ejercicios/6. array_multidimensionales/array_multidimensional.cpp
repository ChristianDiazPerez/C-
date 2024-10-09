#include <iostream>
using namespace std;

int main(){

    //Declaración del array tridimensional
    int paso_coches[24][31][12]; // Hora, dia, mes

    //Almacenamiento de valores aleatorios para todo el array
    for (int i=0; i<24; i++){

        for (int j=0; j<31; j++){

            for (int z=0; z<31; z++){

                paso_coches[i][j][z]= rand ()%1000;
            }
        }
        
    }

    //Acceso 
    cout << "Valor: "<<  paso_coches[7][20][50];
}