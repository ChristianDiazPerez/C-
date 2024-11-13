#include <iostream>
#include <cmath> 
using namespace std;  

//Funciones con valores por defecto

int mostrar(int a=1){
    cout << a <<endl;
}
int mostrar(int b, int a=2){
    cout << a << b << endl;
}
    
int main(){
    mostrar();    //Error, no sabemos a que función se refiere
}


