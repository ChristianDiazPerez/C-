#include <iostream>
#include <vector>
using namespace std; 

int main(){
    vector <int> numeros;  //Vector a recorrer
    int num; //numeros que vamos introduciendo

    cout << "Intoduce los numeros que quiera y para terminar intoroduce 0"<<endl;

    //Se ejecuta siempre que introduzcamos un número y este sea distinto de 0
    while (cin >> num && num!=0){ 
        //Vamos incrementando el vector con los números introducidos
        numeros.push_back(num);
    }
    
    cout << "Has introducido estos numeros:"<<endl;

    for(auto i:numeros){   //Recorremos el vector
        cout << i << endl;
    }
}