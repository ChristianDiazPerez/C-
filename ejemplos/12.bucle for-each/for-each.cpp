#include <iostream>
using namespace std; 

int main(){
    string email="pedro@gmail.com";

    for(auto i:email){
        cout << ((i=='@')?"Hay @":"no hay") << endl;
    }
}
