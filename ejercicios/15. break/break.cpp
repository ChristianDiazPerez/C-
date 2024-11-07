#include <iostream>
#include <vector>
using namespace std; 

int main(){

vector<string>nombres{"Maria","Luisa","Juan","Pedro","Paco"};
string busqueda = "Luisa";

for (int i=0;i<nombres.size();i++){
    cout <<"Lectura de la posicion "<<i<<endl;

    if(nombres[i]==busqueda){
        cout << "Nombre: "<<nombres[i]<<" encontrado. En la posicion "<<i<<endl;
        break;
    }
}

cout <<"Continua el progrma\n";
}