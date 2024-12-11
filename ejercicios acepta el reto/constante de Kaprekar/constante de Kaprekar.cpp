#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // Para sort()
#include <functional> // Para greater<int>()
using namespace std; 

bool comprobarLongitudCadena(string cadena){
    if (cadena.size()==4){
        /*cout << "Longitud de la cadena: OK"<<endl;*/
        return true;
    }
    else{
        /*cout << "Longitud de la cadena: x"<<endl;*/
        return false;
    }
}
bool comprobarNumerosIntroducidos(string cadena){
    vector<char> numeros_vector;
    int contador_num_ok=0;
    for (char c : cadena){  //Pasar la cadena al vector
        numeros_vector.push_back(c);
    }
    for (int i=0;i<numeros_vector.size();i++){ //Pasar  
        if (numeros_vector[i]=='0' || numeros_vector[i]=='1'|| numeros_vector[i]=='2'|| numeros_vector[i]=='3'|| numeros_vector[i]=='4'|| numeros_vector[i]=='5'|| numeros_vector[i]=='6'|| numeros_vector[i]=='7'|| numeros_vector[i]=='8'|| numeros_vector[i]=='9'){
            /*cout << "Digito "<<i<<" es aceptado"<<endl;*/
            contador_num_ok++;
        }
        /*else{
            cout << "Unicamente ha introducido numeros: x"<<endl;
            cout << "Digito "<<i<<" incorrecto: x"<<endl;
                
        }*/
    }
    /*cout << "Contador de numeros aceptados: "<<contador_num_ok<<endl;*/
    if (contador_num_ok==4){
        return true;
    }
    else{
        return false;
    }
}
bool StringAEnreros(string cadena,int& digito1,int& digito2,int& digito3,int& digito4){
    vector<char> vector_char;
    vector<int> vector_int;
    for (char c : cadena){  //Pasar la cadena al vector
        vector_char.push_back(c);
        /*cout <<"char: "<<c<<endl;*/
    }
    digito1=vector_char[0]-48;
    digito2=vector_char[1]-48;
    digito3=vector_char[2]-48;
    digito4=vector_char[3]-48;
    return true;      
}
bool comprobarDigitosDiferentesYCeroAlPrincipio(int digito1, int digito2, int digito3, int digito4){
    int contador=0; //de numeros diferentes 
    //Coprobar todas las parejas posibles

    if(digito4==0){return false;}
    //caso de los 3 primeros digitos a 0
    if((digito1==0 || digito2==0 || digito3==0)&& digito4!=0){
        return true;  
    }
    //caso de los 2 primeros digitos a 0
    if((digito1==0 || digito2==0)&& digito3!=0 && digito4!=0){
        return true;
    }
    //caso de el primer digito a 0
    if(digito1==0 && digito2!=0 && digito3!=0 && digito4!=0){
        return true;
    }

    //Resto de los casos // Todas las parejas posibles
    if (digito1 != digito2){contador ++;}
    if (digito1 != digito3){contador ++;}
    if (digito1 != digito4){contador ++;}
    if (digito2 != digito3){contador ++;}
    if (digito2 != digito4){contador ++;}
    if (digito3 != digito4){contador ++;}
    if (contador >= 2 ){
        return true;
    }
    else{
        return false;
    }
    
}
bool ComprobarSiIntroduceElnumeroKaprekar(int digito1, int digito2, int digito3, int digito4){
    if (digito1==6 && digito2==1 && digito3==7 && digito4==4){
        return false;
    }
    else{
        return true;
    }
}
void iteracion(int entrada, int &salida){

    //Pasar el numero de entrada en array
    int array_entrada[4];
    array_entrada[0]=entrada/1000;
    array_entrada[1]=(entrada/100)-array_entrada[0]*10;
    array_entrada[2]=(entrada/10)-(array_entrada[0]*100)-(array_entrada[1]*10);
    array_entrada[3]=entrada-(array_entrada[0]*1000)-(array_entrada[1]*100)-(array_entrada[2]*10);



    int array_menor_a_mayor[4]{0};
    int array_mayor_a_menor[4]{0};

    //Copia del array de entrada al array orden ascendente
    for (int i=0;i<4;i++){
        array_menor_a_mayor[i]=array_entrada[i];    
    }
    //Copia del array de entrada al array orden descendente
    for (int i=0;i<4;i++){
        array_mayor_a_menor[i]=array_entrada[i];    
    }
    
    //array con orden ascendente
    int n= sizeof(array_menor_a_mayor)/sizeof(array_menor_a_mayor[0]);
    sort(array_mayor_a_menor, array_mayor_a_menor + n);
    

    //array con orden descendente
    int m= sizeof(array_mayor_a_menor)/sizeof(array_mayor_a_menor[0]);
    sort(array_menor_a_mayor, array_menor_a_mayor + m, greater<int>());
    
    //Pasar los arrays a numeros 
    int numero_menor_a_mayor=array_menor_a_mayor[0]*1000+array_menor_a_mayor[1]*100+array_menor_a_mayor[2]*10+array_menor_a_mayor[3];
    int numero_mayor_a_menor=array_mayor_a_menor[0]*1000+array_mayor_a_menor[1]*100+array_mayor_a_menor[2]*10+array_mayor_a_menor[3];

    // numero descendente - numero ascendente

    int resultado= numero_menor_a_mayor - numero_mayor_a_menor;

    cout<<numero_menor_a_mayor<<" - "<<numero_mayor_a_menor<<endl;
    
    salida=resultado;
}


void juego(string cadena){
    int digito1=0,digito2=0,digito3=0,digito4=0;
    
    // Comprobar numero introducido
    cout <<"Comprobacion del numero introducido"<<endl;
    if(comprobarLongitudCadena(cadena)==1 && 
        comprobarNumerosIntroducidos(cadena)==1 && 
        StringAEnreros(cadena,digito1,digito2,digito3,digito4) &&
        comprobarDigitosDiferentesYCeroAlPrincipio(digito1, digito2, digito3, digito4) &&
        ComprobarSiIntroduceElnumeroKaprekar(digito1, digito2, digito3, digito4)){
        cout <<"el num ero es correcto"<<endl;
        cout <<"Digitos introducidos"<<endl<< digito1 <<" "<< digito2 <<" "<< digito3 <<" "<< digito4<<endl;



    // Operar 
    int operacion1_entrada= digito1 * 1000 + digito2 * 100 + digito3 * 10 + digito4;
    int num_memoria = operacion1_entrada; //numero en memoria 

    for(int i=1;i<9;i++){
        cout << "____OPERACION "<<i<<"____"<<endl<<endl;
        cout << "Inicio: "<<num_memoria<<endl;
        iteracion(num_memoria, num_memoria);
        cout << "Resultado operacion "<<i<<": "<<num_memoria<<endl<<endl;
        if(num_memoria==6174){
            cout<<endl<<"EL NUMERO DE KAPREKAR HA SIDO ALCANZADO"<<endl<<"En un total de: "<<i<<" operaciones"<<endl<<endl;
            break;
        }
        if(num_memoria!=6174 && i>7){//Caso que nunca pasará
            cout<<endl<<"NO CONSEGUIMOS ENCONTRAR EL NUMERO DE KAPREKAR!!!"<<endl;
            cout<<"HEMOS ENCONTRADO UN FALLO EN ESTA PROPIEDAD!!!"<<endl;
            cout<<"Numero de intentos: "<<i<<endl;
            break;

        }
    }
    


    }
    else{
        //Numero introducido incorrecto
        cout <<"El numero es Incorrecto !!!!!!"<<endl;
    }

}


int main(){
    string cadena_introducida;
    cout << "CONSTANTE DE KAPREKAR"<<endl<<"***************************"<<endl<<endl;
    cout << "Introduce un numero de 4 digitos, con almenos 2 diferentes: ";
    cin >> cadena_introducida;
    juego(cadena_introducida);

    cout << "El juego ha terminado.";

} 