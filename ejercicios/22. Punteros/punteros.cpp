#include <iostream>
using namespace std;  

int variable = 10; 

void funcion(int * puntero){ //función como parámeto un puntero
    * puntero = 20;   //Cambiamos el valor a lo que apunta puntero
}

int main(){
    
    funcion(&variable); //Ejecutamos función con la dirección de la variable
    cout << variable;

}


