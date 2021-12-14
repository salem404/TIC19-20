#include <iostream>
#include <math.h>
using namespace std;
template <class TIPOD>

void mostrar (TIPOD x);
int main(){
    char a;
    int b;
    cout<<"Intoduzca caracter a mostrar"<<endl<<endl;
    cin>>a;
    cout<<endl<<"Introduzca numero"<<endl<<endl;
    cin>>b;
    cout<<endl<<"El caracter es ";
    mostrar(a);
    cout<<" y el numero es ";
    mostrar (b);
    return 0;
}

template <class TIPOD>
void mostrar(TIPOD x){
    cout<<x;
}