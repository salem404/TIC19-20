#include <iostream>
using namespace std;

int primo(int num);

int main (){
    int num,r;
    cout<<"¿Es este numero primo?"<<endl<<endl<<"Ingrese numero a comprobar: ";
    cin>>num;;
    if(primo(num)==1){
        cout<<"Es primo";
    }else{
        cout<<"No es primo";
    }
}

int primo (int num){
    int r;
    int divisores=0;
    int x=1;
    for(int x=1; x<=num;x++){
        if (num%x==0){
        divisores=divisores+1;
        }
        if (divisores<=2){
            r=1;
        }else {
            r=0;
        }
    }
    return r;
}