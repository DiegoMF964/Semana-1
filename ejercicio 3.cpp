#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std; 
int main()
{
    int a,b ,c,discriminante  ;
    float raiz1,raiz2;
    cout<<"Ingrese los valores para la ecuacion cuadratica ax^2+bx+c=0"<<endl;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
     cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
     cout<<"Ingrese el valor de c: "<<endl;
    cin>>c;
    
    discriminante= (b*b) - (4*a*c);
    raiz1= (-b + sqrt(discriminante))/2*a;
    raiz2= (-b - sqrt(discriminante))/2*a;
    cout<<"la discriminante es: "<<raiz1<<endl;
    cout<<"la discriminante es: "<<raiz2<<endl;
getch();
    return 0;
 
}