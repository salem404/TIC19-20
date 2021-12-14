#include <iostream>
using namespace std;

int main(){
    double a,b;
    cout<<"Comparacion de numeros"<<endl<<"Introduzca primer numero"<<endl;
    cin>>a;
    cout<<"Introduzca segundo numero"<<endl;
    cin>>b;
    if (a==b)
        {cout<<"Son iguales";}
    else
        {if (a<b) 
            {cout<<a<<" es menor que "<<b<<endl;}
        else if (a>b) 
            {cout<<a<<" es mayor que "<<b<<endl;}
        }
}