#include <iostream>
#include <vector>;
using namespace std; 

int main(){
    vector <int> numeros;
    int num;
    int suma=0;

    cout << "Introduzca los numeros menores que 20. Para terminar introduzca 0."<<endl;
    cin >> num;

    //Cuando el num introducido valga 0 o sea mayor que 20 sale del bucle
    while(num!=0 && num<20){
        cout << "Numero introducido: "<< num <<endl;
        numeros.push_back(num); //Metemos el valor en el vector 
        suma=suma + num;  //Realizamos la suma hasta el momento

        cin >> num; //volvemos a preguntar por un nuevo número
        //De lo contrario, entraremos en un bucle infinito
    }

    cout << "Los numeros introducidos son:"<<endl;
    //Recorrer todo el vector para imprimir los valores
    for(auto i:numeros){
        cout << i << "  ";
    }

    cout << endl << "La suma es:"<<endl;
    cout <<suma;
}