#include <iostream>
using namespace std;  

int main(){
    // Puntero constante que apunte a una constante

    const int constante = 10;

    const int * const puntero = &constante; 
    // Con la 1º palabra reservada const, apunta a una constante 
    // Con la 2º palabra reservada int, tipo de dato de la constante 
    // Con la 3º palabra reservada const, puntero constante
    cout << *puntero << endl;
}


