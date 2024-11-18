#include <iostream>
using namespace std;  

int main(){
    int cifras[]={10,20,30,40}; 

    int * puntero = cifras;
    
    cout << *(puntero) <<endl;
    cout <<"direccion: "<<(puntero) <<endl;
    cout << *(puntero +1) <<endl;
    cout <<"direccion: "<<(puntero + 1) <<endl;
    cout << *(puntero +2) <<endl;
    cout << "direccion: "<<(puntero + 2) <<endl<<endl;

    cout << "   Valor actual del puntero "<< *(puntero) <<endl<<endl;

    cout << "Incrementos de puntero"<<endl<<endl;
    cout << *(puntero++) <<endl;
    cout << *(puntero++) <<endl;
    cout << *(puntero++) <<endl;

    cout << "   Valor actual del puntero "<< *(puntero) <<endl<<endl;

    cout << "Decrementos de puntero"<<endl<<endl;

    cout << *(puntero--) <<endl;
    cout << *(puntero--) <<endl;
    cout << *(puntero--) <<endl;

    cout << "   Valor actual del puntero "<< *(puntero) <<endl<<endl;

    
   



}


