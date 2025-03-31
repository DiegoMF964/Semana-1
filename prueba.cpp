#include <iostream>
#include <conio.h>
using namespace std; 
int main()
{
    const float pi=3.14;
    int altura, radio;
    float area, volumen;
    cout<<"Indique el radio: "<<endl;
    cin>>altura;
    cout<<"Indique la altura: "<<endl; 
    cin>>radio;   
    area = 2*pi*radio*(radio+altura);
    volumen = pi*radio*radio*altura; 
    cout<<"El area superficial del cilindro es: "<<area<<endl; 
    cout<<"El volumen del cilindro es: "<<volumen; 
    getch(); 
    return 0;
}
