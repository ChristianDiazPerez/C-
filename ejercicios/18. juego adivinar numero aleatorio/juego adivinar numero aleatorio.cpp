#include <iostream>
using namespace std;  

int main(){
    cout<<"JUEGO AVIVINAR NUMERO DEL 1 AL 100\n\n";

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
                cout<<"HA GANADO !!! el número era el: "<<numero<<endl;
                break;
            }
            else{
                if(numero>introducido){
                    cout<<"El numero es mayor\n";
                }
                if(numero<introducido){
                    cout<<"El numero es menor\n";
                }
            }
        }
        cout<<"¿Quiere seguir jugando? (S o N)\n";
        cin>>seguirJugando;
        if(seguirJugando!='s'|| 'S')break;
    }
    cout<<"El juego ha terminado,";
}