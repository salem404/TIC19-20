#include <iostream>
using namespace std;

int main(){
    int n,e,ec;
    cout<<"Ingrese la opcion que desee realizar"<<endl<<"1: Cubo de un numero"<<endl
    <<"2: Numero par o impar"<<endl<<"3: Salir"<<endl;
    cin>>n;
    switch(n){
        case 1: cout<<endl<<"Introduzca numero del que desee saber su cuadrado"<<endl;
            cin>>e; ec=e*e;
            cout<<endl<<"El cuadrado es "<<ec;break;
        case 2: cout<<endl<<"Intoduzca numero del que se desee saber si es par o impar"<<endl;
            cin>>e; ec=e%2;
            if (ec==0) {
                cout<<endl<<"Es par";
            } else{
                cout<<endl<<"Es impar";
            }
            break;
        case 3: break;
        default: cout<<"ERROR: Numero invalido, introducir (1, 2 o 3)";
    }
}