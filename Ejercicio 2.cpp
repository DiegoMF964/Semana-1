#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int recorrido,rec_exc1,rec_exc2,rec_exc3;
    float pago;
    const float c1=1.5,c2=1.0,c3=0.5,c4=300;
    cout<<"Ingrese su kilometraje recorrido: ";
    cin>>recorrido;
      if(recorrido<100){
       pago = c4;
      }  
     else if( recorrido>100 && recorrido<200){
          rec_exc1=200-recorrido;
          pago= (rec_exc1*c1)+300;     
      }
     else if  ( recorrido>200 && recorrido<300){
          rec_exc2=300-recorrido;
          pago= (rec_exc2*c2)+300+150;       
      }
     else if  ( recorrido>300){
          rec_exc3=recorrido-300;
          pago = (rec_exc3*c3)+300+150+100;        
      }   
 cout<<"Usted debe pagar: "<<pago;
getch();
    return 0;
}