#include <iostream>
using namespace std;

int main()
{
    string nombre = "Juan";
    int edad = 20;
    int salario;
    cout << "Introduzca el salario del empleado: " << endl;
    cin >> salario;

    cout << "El trabajador " << nombre << ", con la edad de " << edad << " anos, tiene un salario de " << salario << " Euros mensuales.";
    
    return 0;
}
