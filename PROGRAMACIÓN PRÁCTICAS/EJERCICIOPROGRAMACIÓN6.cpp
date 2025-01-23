#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numeroentero;
            

    cout<<"introduzca un numero entero"<<endl;

    cin>>numeroentero;

    if (numeroentero == 0)
    {
        cout<<"El numero introducido es = 0" <<endl;

    } else if (numeroentero < 0) {

        cout<<"El numero introducido es negativo" <<endl;    

    } else if (numeroentero > 0)
    {
        cout<<"El numero introducido es positivo" <<endl;
    }
    
    

return 0;

}