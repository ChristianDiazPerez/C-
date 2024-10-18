#include <iostream>
using namespace std;

int main(){

    float numero_introducido;
    float cociente;
    bool numero_primo=0;
    

    //Los números primos solo se pueden dividir entre 1 y ellos mismos.

    cout << "Introduce un numero: ";
    cin >> numero_introducido;
    

    //Vamos a dividir el numero introducido entre todos los números del 2 a 10

    for (int i=2;i<11;i++){
        cociente = numero_introducido/i;
        cout << numero_introducido << " / "<< i << " = " << cociente << /*"    Resto = " << resto  << */ endl;
        if (cociente=1){
            if (numero_introducido=cociente){
                numero_primo=1;
            }
            
        }
    }

    if(numero_primo=1){
        cout << "Numero primo";
    }
    else{
        cout << "Numero NO primo";
    }
}
