#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,rad,r1,r2;
    cout<<"Calculo raiz de segundo grado"<<endl<<"Introduzca a en ax^2+bx+c"<<endl;
    cin>>a;
    cout<<"Introduzca b"<<endl;
    cin>>b;
    cout<<"Introduzca c"<<endl;
    cin>>c;
    rad=pow(b, 2)-4*a*c;
    r1=(-b+sqrt(rad))/(2*a);
    r2=(-b-sqrt(rad))/(2*a);
    if (rad<0){
        cout<<"ERROR: La raiz no puede ser negativa";
    } else {
        cout<<"El resultado es "<<r1<<" y "<<r2<<endl;
        }
}