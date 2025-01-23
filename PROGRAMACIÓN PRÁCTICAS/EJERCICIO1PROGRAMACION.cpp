#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numero;
    int resultado = 0;
    int contador = 0;

      
    while (contador < 5){

        cout<<"introduzca un numero"<<endl;

        cin>>numero;

        resultado += numero;
        
        contador = contador + 1;

    }

    cout<<"la suma total es igual a "<< resultado <<endl;          

return 0;

}