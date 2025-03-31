    #include <iostream>
    #include <conio.h>
    #include <math.h>
    using namespace std; 
    int main()
    {   int a,b ,c,discriminante, parte_entero  ;
        float raiz1,raiz2, parte_decimal;
        cout<<"Ingrese los valores para la ecuacion cuadratica ax^2+bx+c=0"<<endl;
        cout<<"Ingrese el valor de a: "<<endl;
        cin>>a;
        cout<<"Ingrese el valor de b: "<<endl;
        cin>>b;
        cout<<"Ingrese el valor de c: "<<endl;
        cin>>c;   
        discriminante= (b*b) - (4*a*c);
        if(discriminante > 0 ){
            raiz1= (-b + sqrt(discriminante))/2*a;
            raiz2= (-b - sqrt(discriminante))/2*a;
            cout<<"la raiz 1 es: "<<raiz1<<endl;
            cout<<"la raiz 2 es: "<<raiz2<<endl;
        }
        else if(discriminante == 0){
            raiz1= (-b + sqrt(discriminante))/2*a;
            cout<<"la raiz es: "<<raiz1<<endl;
        }
        else if (discriminante < 0){
            parte_entero = (-b)/(2*a);
            float parte_decimal = sqrt(-discriminante)/(2*a);
            cout<<"la raiz 1 es: "<<parte_entero<<" + "<<parte_decimal<<"i"<<endl;
            cout<<"la raiz 2 es: "<<parte_entero<<" - "<<parte_decimal<<"i"<<endl;
        }
        getch();
        return 0;
    }