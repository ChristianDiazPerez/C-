#include <iostream>
using namespace std; 

int main(){
    int seleccion=0;

    do{
        cout <<"Seleccione una opcion.\n";
        cout <<"1. Opcion 1\n";
        cout <<"2 Opcion 2\n";
        cout <<"3. Salir\n";
        cin >> seleccion;
        if (seleccion==1) cout <<"OPCION 1\n";
        if (seleccion==2) cout <<"OPCION 2\n";
    }
    while (seleccion!=3);

    cout <<"Ha seleccionado salir\n";
    cout <<"Seguimos con el programa\n";
}