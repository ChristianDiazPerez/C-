#include <iostream>
using namespace std;  
int main(){
    for(int i=0;i<11;i++){  //eje i
        for(int y=0;y<11;y++){ //eje y
        int resultado=i*y;
        cout << i <<" X "<<y<<"= "<<resultado<<endl;
        }
        cout << endl;
    }
}