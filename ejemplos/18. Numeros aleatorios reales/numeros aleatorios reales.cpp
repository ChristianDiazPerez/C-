#include <iostream>
#include <cstdlib> //métodos rand() y srand()
#include <ctime> //método time()
#include <thread> //libreria hilos
using namespace std;

int main(){
    srand(time(nullptr));
    while(true){
        int numero=rand() % 101;
        cout << numero <<endl;
        this_thread::sleep_for(chrono::seconds(1)); //Parar la ejecución del hilo cada segundo
    }    
}

