#include <iostream>
#include <thread> //libreria hilos
#include <chrono> //libreria chrono
using namespace std;  

double leerTemperatura(){ //Funcion crear valores de temperatura 
    //Es double, porque el retorno es un valor double
    return 20.0 + (rand() % 20); //A 20 le sumo un número aleatorio entre 0 y 19.9999999(el 20 no está incluido en la experesión). 
    //Por lo que la lectura será de 20 a 40.
}

void esperarSegundos(int segundos){ //Funcion pausar el hilo de ejecucion
    this_thread::sleep_for(chrono::seconds(segundos));
}


int main(){
    const double limiteTemperatura = 35.0;

    for(;;){
        
        double temperaturaActual = leerTemperatura(); //Asignamos la temperatura de lectura a la función 
        cout << "Temperatura actual: "<<temperaturaActual<< " grados"<<endl;
        if(temperaturaActual>limiteTemperatura){
            cout << "ALERTA !!! Temperatura maxima alcanzada. "<<temperaturaActual<<" grados"<<endl;
        }
        esperarSegundos(3); //pausamos el hilo de ejecución 3s
    }
}