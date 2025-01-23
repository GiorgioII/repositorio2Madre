#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string color;
    bool acierto = false;
          
    while (acierto != true){

        cout<<"introduzca un color"<<endl;

        cin>>color;

       if (color == "rojo"){

        acierto = true;
       }

    }

    cout<<"Excelente has acertado"<<endl;      
    
        

return 0;

}