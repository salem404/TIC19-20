#include <iostream>
using namespace std;

int main(){
    double a;
    cout<<"Edad dentro de rango"<<endl<<"Introduzca edad"<<endl;
    cin>>a;
    if (a<18) {
        cout<<"No esta dentro de rango";
    } else
        if (a>35) {
            cout<<"No esta dentro de rango";}
        else
            cout<<"Esta dentro de rango";
}