#include <iostream>
using namespace std;

int main(){
    double a,b,c,s,r,m,d;
    cout<<"Calcula de la suma, resta, multiplicacion y division de tres numeros"<<endl<<"Introduzca primer numero"<<endl;
    cin>>a;
    cout<<"Introduzca segundo numero"<<endl;
    cin>>b;
    cout<<"Introduzca tercer numero"<<endl;
    cin>>c;
    s=a+b+c;
    r=a-b-c;
    m=a*b*c;
    d=a/b/c;
    cout<<"La suma es "<<s<<endl<<"La resta es "<<r<<endl<<"La multiplicacion es "<<m<<endl<<"La division es "<<d<<endl;
    }