#include <iostream>
using namespace std;

int main(){
    double a;
    cout<<"¿Positivo o negativo?"<<endl<<"Introduzca numero"<<endl;
    cin>>a;
    if (a==0) {
        cout<<"No es positivo ni negativo";
    } else
        if (a<0) {
            cout<<"Es negativo";}
        else
            cout<<"Es positivo";}