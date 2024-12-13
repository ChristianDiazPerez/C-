#include <iostream>
using namespace std;  

void funcion(int * puntero){
    //Cambio el valor del puntero
    (*puntero)+=5; //El valor al que apunta el puntero, lo incrementamos en 5

    /*  * puntero = 40;  Esto seria otra posibilidad    */
}

int main(){
    int variale_externa=10;
    cout <<"Variable al principio: "<<variale_externa<<endl;
    funcion(&variale_externa);
    cout <<"Variable al final: "<<variale_externa<<endl;
}


