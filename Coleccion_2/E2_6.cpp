#include <iostream>
#include <math.h>
using namespace std;

int suma2(int num);
int suma3(int num);
int main () {
    int num,sum;
    cout<<"Suma de cifras de un numero"<<endl<<"Introduzca numero:";
    cin>>num;
    if (num<=9){
        sum=num;
        cout<<"La suma es "<<sum;
    } else
        { if(num<=99) {
            sum=suma2(num);
            cout<<"La suma es "<<sum;
        }else{
            if (num<=999){
                sum=suma3(num);
                cout<<"La suma es "<<sum;}
            else {
            cout<<"ERROR: Debe ser de tres cifras o menos";
            }
        }
    }
}

int suma2(int num){
    int d,r,u,suma;
    d=num/10;
    u=num%10;
    suma=d+u;
    return suma;
}
int suma3(int num) {
    int c,r,d,u,suma;
    c=num/100;
    r=num%100;
    d=r/10;
    u=r%10;
    suma=c+d+u;
    return suma;
}