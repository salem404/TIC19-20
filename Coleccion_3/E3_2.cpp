#include <iostream>
#include <string.h>
using namespace std;

string l;
string lol(string l);

int main (){
    cout<<"Muestra de la primera letra"<<endl<<"Introduzca cadena de texto"<<endl;
    cin>>l;
    cout<<endl<<"La primera letra es "<<lol(l);
}

string lol(string l){
    string n;
    strncpy(n,l,1);
    return n;
}