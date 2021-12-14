#include <iostream>
using namespace std;

int main(){
    double a,b,c,np,ne,p,nf;
    cout<<"Calculo de nota final segun otras tres"<<endl<<"Introduzca nota de practicas"<<endl;
    cin>>a;
    cout<<"Introduzca nota del examen"<<endl;
    cin>>b;
    cout<<"Introduzca nota de participacion"<<endl;
    cin>>c;
    np=0.3*a;
    ne=0.6*b;
    p=0.1*c;
    nf=np+ne+p;
    cout<<"La nota final es "<<nf<<endl;
}