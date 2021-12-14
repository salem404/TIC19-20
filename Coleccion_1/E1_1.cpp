#include <iostream>
using namespace std;

int main(){
    double x,iva,p;
    cout<<"Calculo de precio con IVA"<<endl<<"Introduzca precio sin IVA"<<endl;
    cin>>x;
    cout<<"Introduzca IVA (%)"<<endl;
    cin>>iva;
    p=x+(x*(iva/100));
    cout<<"El precio es "<<p<<" euros";
}