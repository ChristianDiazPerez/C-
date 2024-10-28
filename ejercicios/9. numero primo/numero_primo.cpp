#include <iostream>
using namespace std;

int main(){

    int numero_introducido;
    float cociente;
    int resto;
    int contador_resto0=0;
    

    //Los números primos solo se pueden dividir entre 1 y ellos mismos.

    cout << "Introduce un numero: ";
    cin >> numero_introducido;

    //Número máximo por el que vamos a dividir el numero introducido
    int mitad_numero= numero_introducido /2;
    
    cout <<"El numero introducido es: "<< numero_introducido<< endl;
    cout << "La cantidad de veces por las que vamos a divir este numero es: "<<numero_introducido<<" / 2 = "<<mitad_numero<<endl;
    mitad_numero = mitad_numero +1;

    //Vamos a dividir el numero introducido entre todos los números del 2 a 10

    for(int i=2;i<mitad_numero;i++){
        cociente=numero_introducido/i;
        resto=numero_introducido%i;
        cout << numero_introducido << " / "<< i << " = " << cociente << "       Resto: " << resto <<endl;
        if (resto==0){
            contador_resto0 = contador_resto0 + 1;
        }
    }
    cout << "Contador de resto 0: "<< contador_resto0 << endl;



    if(contador_resto0<2){
        cout << "Numero primo";
    }
    else{
        cout << "Numero NO primo";
    }
}
