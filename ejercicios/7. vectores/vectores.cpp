#include <iostream>
#include <vector> 
using namespace std; 

int main(){

    vector <int> numeros{1,2,3,4,5};
    vector <char> letras{'a','b','c','d'};
    vector <double> salario_base(11, 1500.50);

    cout << numeros[3] << endl;
    cout << numeros[700] << endl;
}
