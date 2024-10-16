#include <iostream>
using namespace std; 

int main (){

    int a = 1;
    int b = 1;

    //Incremento como sufijo
    
    int z =a++;

    cout << "A vale: "<< a << endl;
    cout << "Z vale: "<< z << endl;

    //Incremento como prefijo 

    int w = ++b;

    cout << "B vale: "<< b << endl;
    cout << "W vale: "<< w << endl;
}