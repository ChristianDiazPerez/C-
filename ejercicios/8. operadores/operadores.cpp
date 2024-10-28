#include <iostream>
using namespace std; 

int main (){

    int a = 10; //entero
    int  b= 12; //entero
    float  c = 30; //decimal 

    auto resultado = (a+b+c)/3; 

    cout << resultado << endl << typeid(resultado).name(); 
}