#include <iostream>
using namespace std; 

int main (){

    char idioma, categoria;
    

    cout << "Elija el idioma"<< endl << endl;
    cout << "E. Espanol"<< endl;
    cout << "I. Ingles"<< endl;
    cout << "Introduce la opcion deseada (E o I)"<< endl;
    cin >> idioma;

    switch(idioma){
        case 'E':
        case 'e':
            //Opciones en español
            cout << "Idioma seleccionado: Espanol" << endl;  
            cout << "Elija una categoria"<< endl << endl;
            cout << "L. Libros"<< endl;
            cout << "R. Ropa"<< endl;
            cout << "T. Tecnologia"<< endl;
            cout << "Introduce la opcion deseada (L, R o T)"<< endl; 
            cin >> categoria;
            switch(categoria){   //Opciones en español       
                case 'L' :
                case 'l' :
                    cout << "Aqui tiene todos los libros." << endl;
                    break;
                case 'R' :
                case 'r' :
                    cout << "Aqui tiene toda la ropa." << endl;
                    break;
                case 'T' :
                case 't' :
                    cout << "Aqui tiene toda la tecnoloia." << endl;
                    break;
                default:
                    cout << "Error en la introduccion de la categoria." << endl;
                }
            break;
        
        case 'I':
        case 'i':
            //Opciones en inglés 
            cout << "Selected lenguaje: English" << endl;  
            cout << "Choose a category"<< endl << endl;
            cout << "B. Books"<< endl;
            cout << "C. clothes"<< endl;
            cout << "T. Tecnology"<< endl;
            cout << "Choose the category that you whish (B, C o T)"<< endl;
            cin >> categoria;
            switch(categoria){ //Categorias en inglés 
                case 'B' :
                case 'b' :
                    cout << "Here you are the books." << endl;
                    break;
                case 'C' :
                case 'c' :
                    cout << "Here you are the clothes." << endl;
                    break;
                case 'T' :
                case 't' :
                    cout << "Here you are the tecnology." << endl;
                    break;
                default:
                    cout << "Error in entering the category." << endl;
                }
            break;
        default:
            cout << "Error in entering the lenguaje." << endl;   
    }
}