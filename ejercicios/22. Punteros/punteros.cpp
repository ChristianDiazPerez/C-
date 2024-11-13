#include <iostream>
using namespace std;  

auto factorial(int n){
    if (n==0){
        return 1; //Caso base
    }
    else{
        return n*factorial(n-1); //Recursividad
    }

}

int main(){
    int numero;
    cout <<"Introduce un numero: "<<endl;
    cin >> numero;
    cout <<endl;
    cout << "!"<<numero<<" es: "<<factorial(numero)<<endl;
}


