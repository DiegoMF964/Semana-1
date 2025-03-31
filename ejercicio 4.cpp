#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float d, altura, ganancia,saltos,aumenta;
    
    cout<<"Ingrese la distancia: "<<endl;
    cin>>d;
      cout<<"Ingrese la la altura del primer salto: "<<endl;
    cin>>altura;
      cout<<"Ingrese la ganancia: "<<endl;
    cin>>ganancia;
    ganancia= ganancia *0.01;
    
    if(d>altura){
        saltos = 1;
        while (d>altura){
            cout<<"El numero de saltos" <<endl<<saltos<<" altura "<<endl<<altura;
            saltos = saltos+1;
            aumenta = altura + ganancia;
            altura = altura + aumenta;
        }
    }
        else {
          cout<<"xd ";   
            
        }
    
    return 0 ; 
}