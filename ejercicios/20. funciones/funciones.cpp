#include <iostream>
using namespace std;  

template <typename T,typename U> //Utilización de genéricos
int suma(T a,U b){ //Estas dos variables pueden ser de cualquier tipo
    return a+b;
}

int main(){
    //con dos enteros
    auto resultado1 = suma(5,3);
    //con entero y flotante
    auto resultado2 = suma(1,2.5);
    //con dos flotantes
    auto resultado3 = suma(1.5,1.2);

    cout << resultado1 <<" / "<<resultado2<<" / "<<resultado3<<endl;
}


