#include <iostream>
using namespace std;

int main (){

    int array_bidimensional[5][5];

    cout << "Introduce cada valor" << endl ;

    for (int fila=0; fila<4; fila++){
        for (int columna=0; columna<5; columna++){
            cin >> array_bidimensional[fila][columna];
        }

    }
    cout << "Array bidimensional introducido:" << endl ;

    for (int a=0; a<4; a++){
        cout<< endl;
        for (int b=0; b<5; b++){
            cout<< array_bidimensional[a][b]<< " ";
        }
    }
}