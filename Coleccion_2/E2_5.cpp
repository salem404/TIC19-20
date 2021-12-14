#include <iostream>
using namespace std;

double minimo(double a, double b, double c);
int main(){
    double a,b,c,m;
    cout<<"Busqueda del menor entre tres numeros"<<endl<<"Introduzca primer numero"<<endl;
    cin>>a;
    cout<<"Introduzca segundo numero"<<endl;
    cin>>b;
    cout<<"Introduzca tercer numero"<<endl;
    cin>>c;
    m=minimo(a,b,c);
    cout<<"El menor es "<<m;
}
double minimo(double a,double b, double c){
    double m;
    if (a<b)
        {if (b<c){m=a;}
        else {
            if (c<a){m=c;}
            else {m=a;}}}
    else {
        if (b<c) {m=b;}
        else{ m=c;}}
    return m;
}