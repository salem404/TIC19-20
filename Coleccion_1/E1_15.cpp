#include <iostream>
using namespace std;

int main(){
    double i,r,s;
    char o;
    s=1000;
    cout<<"¿Que operacion desea realizar? (Ingrese letra correspondiente)"<<endl<<"C: Consultar saldo"
    <<endl<<"I: Ingreso"<<endl<<"R: Retirar"<<endl<<endl;
    cin>>o;
    switch (o){
        case 'C':
            cout<<endl<<"Su saldo es "<<s<<endl;
            break;
        case 'I':
            cout<<endl<<"Ingrese cantidad a ingresar"<<endl;
            cin>>i;
            s=s+i;
            cout<<endl<<"Su saldo es "<<s<<" euros"<<endl;
            break;
        case 'R':
            cout<<endl<<"Ingrese cantidad a retirar"<<endl<<endl;
            cin>>r;
            if (s>r) {
                s=s-r;
                cout<<endl<<"Su saldo es "<<s<<" euros"<<endl;
            } else {
                cout<<"Saldo insuficiente"<<endl;
            }break;
        default:
        cout<<"Ingrese caracter valido (C, I o R)"<<endl;}
}