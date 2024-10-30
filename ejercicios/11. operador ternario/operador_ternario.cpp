#include <iostream>
using namespace std; 

int main (){

    int numero;
    cout << "Introduce un mumero" <<endl;
    cin >> numero;
    /*     SENTENCIA IF-ELSE EQUIVALENTE
    if (numero%2 == 0){
        cout << "numero PAR";
    }
    else{
        cout << "numero IMPAR";
    }
    */
   cout << "Numero " << ((numero%2==0)?"PAR":"INPAR");
}