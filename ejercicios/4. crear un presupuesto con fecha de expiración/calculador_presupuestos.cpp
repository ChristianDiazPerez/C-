#include <iostream>
using namespace std;

//Precios productos 
const float precio_media = 35.5;
const float precio_alta = 55.3;
const float iva = 0.21;

//productos seleccionados
int cantidad_media;
int cantidad_alta;





int dia_introducido;
int mes_introducido;
int ano_introducido;

int dia_fin;
int mes_fin;
int ano_fin;


int calcular_fecha(int dia, int mes, int ano){
    switch (mes)
    {
    case 1:  //Enero
        if (dia >= 29){   //termina en dias de marzo
            dia_fin = dia - 28;
            mes_fin = mes + 2;
            ano_fin = ano;
        }
        else if (dia >= 31){
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        else{
            dia_fin = dia; //termina en dias de febrero
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        break;

    case 2:  //Febrero
        if (dia < 29){   //termina en dias de marzo unicamente 
            dia_fin = dia + 2;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
    break;
        
    case 3:  //Marzo       caso de mes con 31 dias 
        if (dia <= 30){   
            dia_fin = dia - 1;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else if(dia = 31){
            dia_fin = 30;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 4:  //Abril      caso de mes con 30 dias 
        if (dia <= 30){   
            dia_fin = dia;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 5:  //Mayo
        if (dia <= 30){   
            dia_fin = dia - 1;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else if(dia = 31){
            dia_fin = 30;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 6:  //Junio        caso de mes con 30 dias 
        if (dia <= 30){   
            dia_fin = dia;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 7:  //Julio
        if (dia <= 30){   
            dia_fin = dia - 1;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else if(dia = 31){
            dia_fin = 30;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 8:  //Agosto
        if (dia <= 30){   
            dia_fin = dia - 1;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else if(dia = 31){
            dia_fin = 30;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 9:  //Septiembre
        if (dia <= 30){   
            dia_fin = dia;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 10:  //Octubre
        if (dia <= 30){   
            dia_fin = dia - 1;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else if(dia = 31){
            dia_fin = 30;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 11:  //Noviembre
        if (dia <= 30){   
            dia_fin = dia;
            mes_fin = mes + 1;
            ano_fin = ano;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;
    case 12:  //Diciembre
        if (dia <= 30){   
            dia_fin = dia - 1;
            mes_fin = 1;
            ano_fin = ano + 1;
        }
        else if(dia = 31){
            dia_fin = 30;
            mes_fin = 1;
            ano_fin = ano + 1;
        }
        else{
            dia_fin = 0;
            mes_fin = 0;
            ano_fin = 0;
        }
        break;

    default:   //Mes introducido no valido
        dia_fin = 0;
        mes_fin = 0;
        ano_fin = 0;
        break;
    }
    return 0;
}


int main(){

    // Información todamada del usuario 

    cout << "PRESUPUESTO AUTOMATICO DE TARIMA FLOTANTE" << endl << endl << "Por favor, indique que cantidad de metros cuadrados de tarima flotate quiere instalar." << endl << "Si no desea instlar de un tipo en concreto dintroduzca un 0" << endl ;
    cout << "calidad media:";
    cin >> cantidad_media; 
    cout << "calidad alta:";
    cin >> cantidad_alta;
    cout << "Introduce la fecha de hoy " << endl << "dia: ";
    cin >> dia_introducido;
    cout << "mes: ";
    cin >> mes_introducido;
    cout << "ano: ";
    cin >> ano_introducido;

    //Calculos de precios

    float resultado_media = cantidad_media * precio_media ;
    float resultado_alta = cantidad_alta * precio_alta;
    float total = resultado_alta + resultado_media;
    float total_iva = total * iva;
    float total_con_iva = total + total * iva;

    //Calculo de fecha de expiración del presupuesto
    calcular_fecha(dia_introducido, mes_introducido, ano_introducido);

    //Impresión por terminal del presupuesto

    cout << "*******************************************"<< endl << endl << "            Pressupuesto" << endl << endl;
    cout << endl << "           Expedido a fecha de: " << dia_introducido << "/" << mes_introducido << "/" << ano_introducido << endl << endl << endl ;
    cout << endl << "Presupuesto valido unicamente en 30 dias siguientes a su expedicion." << endl;
    cout << "Caduca el " << dia_fin << "/" << mes_fin << "/" << ano_fin << endl << endl << endl;
    cout << "calidad media: cantidad " << cantidad_media << " x " << precio_media << "Euros" << endl;
    cout << "calidad alta: cantidad " << cantidad_alta << " x " << precio_alta << "Euros" << endl << endl << endl << endl << endl;
    cout << "               iva: 21% -> " << total_iva << " Euros" << endl << endl;
    cout << "               Total: " << total_con_iva << "Euros" << endl << endl << "*******************************************"<< endl ;

    return 0;
}

