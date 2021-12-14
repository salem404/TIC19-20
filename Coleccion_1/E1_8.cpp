#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Busqueda del mayor entre tres numeros"<<endl<<"Introduzca primer numero"<<endl;
    cin>>a;
    cout<<"Introduzca segundo numero"<<endl;
    cin>>b;
    cout<<"Introduzca tercer numero"<<endl;
    cin>>c;
    if (a>b) {
        if (b>c){
            cout<<a<<" es el mayor"<<endl;
        } else 
            if (c>a) {
                cout<<c<<" es el mayor"<<endl;
            } else
                cout<<a<<" es el mayor"<<endl;
        } else 
            if (a>c) {
                cout<<c<<" es el mayor"<<endl;
        } else 
            if (b>c){
                cout<<b<<" es el mayor"<<endl;
            } else
                cout<<c<<" es el mayor"<<endl;
}