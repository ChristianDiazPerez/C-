#include <iostream>
#include <vector>
using namespace std; 

vector<float>precios{50,60,200,100,40,300};
float descuento = 0.20; 
float precio_final;

int main(){
    cout << "Precios con descuentos \n\n";

    for(int i=0; i<precios.size(); i++){
        if(precios[i]<100){ //Siempre que el precio sea menor que 100 salimos de esta vuelta del bucle
            continue;
        }
    
        
        precio_final=precios[i]-(precios[i]*descuento);

        cout<< "El precio: " << precios[i]<<" se queda en: "<<precio_final<<endl;
    }
    cout << "Continua el programa";
}