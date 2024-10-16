#include <iostream>
#include <vector> 
using namespace std; 

int main(){
    int tamano_vector; 

    cout << "Introduce el numero de elementos que quieres que tenga tu vector: " << endl;

    cin >> tamano_vector;
    vector <int> numeros(tamano_vector);

    int i=0;
    while (i<tamano_vector)
    {
        cout << "Valor en posicion "<< i <<": ";
        cin >> numeros.at(i);
        i++;
        
    }

    cout << "Tu vector es: " << endl;

    int z=0;
    while (z<numeros.size())
    {
    cout << "Posicion "<< z <<": "<<numeros.at(z) <<endl;

    z++;
    }
    
    
}
