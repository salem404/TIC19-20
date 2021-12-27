#include <iostream>
using namespace std;
//https://www.matriculas.com.es/buscador-de-matriculas.php
char m[6];
void matri(char l);

int main (){
    char l;
    int i;
    cout<<"¿Tiene mi vehiculo mas de 10 anos?"<<endl<<"Introduzca su matricula"<<endl;
    for (i=0; i<7;i++){
        cin>>m[i];
        l=m[4];
    }
    matri(l);
}

void matri(char l){
    switch(l){
    case 'H': case 'J': case 'K': 
        cout<<"Tiene menos de 10 anos";
    break;
    case 'B': case 'C': case 'D': case 'F': case 'G':
        cout<<"Tiene mas de 10 anos";
    break;
    default:
        cout<<"ERROR: Matricula incoherente";
    }
}