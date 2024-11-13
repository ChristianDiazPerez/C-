#include <iostream>
#include <cstdlib> //métodos rand() y srand()
#include <ctime> //método time()
using namespace std;  

int main(){
    cout<<"JUEGO AVIVINAR NUMERO DEL 1 AL 100\n\n";

    //Cambiar la semilla, en función del tiempo de ejecución, para obtener números aleatorios reales
    srand(time(nullptr));

    while(true){
        int numero=rand() % 101;
        int intento=0;
        int introducido;
        char seguirJugando;

        cout<<"tienes 5 intentos\n\n";

        while(true){ 
            intento++;
            if(intento==6){
                cout<<"HA PERDIDO. \nNumero maximo de intentos alcazados\n"<<"El numero era el: "<<numero<<endl;
                break;
            }
            cout<<"Intento "<<intento<<"\nIntroduce numero: "; 
            cin>>introducido;
            if(numero==introducido){
                cout<<"HA GANADO !!! el numero era el: "<<numero<<endl;
                break;
            }
            else{
                if(numero>introducido){
                    cout<<"El numero es mayor (A)\n";
                }
                if(numero<introducido){
                    cout<<"El numero es menor (V)\n";
                }
            }
        }
        
        cout<<"¿Quiere seguir jugando? (S o N)\n";
        cin>>seguirJugando;
        if(seguirJugando =='N')break;
        if(seguirJugando =='n')break;
    }
    cout<<"El juego ha terminado";
}

