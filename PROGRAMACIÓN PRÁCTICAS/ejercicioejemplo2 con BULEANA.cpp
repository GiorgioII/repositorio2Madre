#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numeroentero = 0;
            
    bool muestra = false;
    
        while( numeroentero < 11){

            if (muestra == true){
               
                cout<<numeroentero<<endl;

            }
            
            if (numeroentero % 2 == 0){
                
                muestra = false;

            }else if(numeroentero % 2 != 0){

                muestra = true;

            }
                numeroentero = numeroentero + 1;

    }

     
    
return 0;

}