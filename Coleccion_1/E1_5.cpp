#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,h;
    cout<<"Calculo de la hipotenusa de un triangulo"<<endl<<"Introduzca primer cateto"<<endl;
    cin>>a;
    cout<<"Introduzca segundo cateto"<<endl;
    cin>>b;
    h=sqrt(a*a+b*b);
    if (a<=0){
        cout<<"ERROR: El cateto debe ser mayor que 0";}
    else if (b<=0){
        cout<<"ERROR: El cateto debe ser mayor que 0";}
    else
        cout<<"La hipotenusa es "<<h<<endl;
    }