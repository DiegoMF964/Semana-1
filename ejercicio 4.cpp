#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float d, altura, ganancia,saltos,aumenta;
    int contador=0;
    
    cout<<"Ingrese la distancia: "<<endl;
    cin>>d;
      cout<<"Ingrese la la altura del primer salto: "<<endl;
    cin>>altura;
      cout<<"Ingrese la ganancia: "<<endl;
    cin>>ganancia;
    
    if(d>altura){
        saltos = 1;
        cout<<"Nro salto    altura "<<endl;
        cout<<saltos<<"            "<<altura<<endl;
        while (d>altura){
            saltos = saltos+1;
            aumenta = altura*ganancia;
            altura = altura + aumenta;
            cout<<saltos<<"            "<<altura<<endl;
            contador = contador + 1;
        }

        cout<<"El numero de saltos es: "<<contador<<endl;
    }
        else {
            cout<<"El salto es menor que la distancia"<<endl; 
        }
    
    return 0 ; 
}