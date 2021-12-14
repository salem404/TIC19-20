#include <iostream>
#include <string>
using namespace std;

int main(){
    int num,r,c,d,u;
    cout<<"Numero a romano"<<endl<<"Introduzca numero"<<endl;
    cin>>num;
    c=num/100;
    r=num%100;
    d=r/10;
    u=r%10;
    if (num>999){
        cout<<"ERROR: El numero debe ser menor que mil";
    }else{ 
        if (num<=0){
            cout<<"ERROR: El numero debe ser mayor de 0";
            } else{
                cout<<endl<<"El numero es ";
                switch (c) {
                case 1: cout<<"C";break;
                case 2: cout<<"CC";break;
                case 3: cout<<"CCC";break;
                case 4: cout<<"CD";break;
                case 5: cout<<"D";break;
                case 6: cout<<"DC";break;
                case 7: cout<<"DCC";break;
                case 8: cout<<"DCCC";break;
                case 9: cout<<"CM";break;
                default: cout<<"";
                }
                switch (d) {
                case 1: cout<<"X";break;
                case 2: cout<<"XX";break;
                case 3: cout<<"XXX";break;
                case 4: cout<<"XL";break;
                case 5: cout<<"L";break;
                case 6: cout<<"LX";break;
                case 7: cout<<"LXX";break;
                case 8: cout<<"LXXX";break;
                case 9: cout<<"XC";break;
                default: cout<<"";
                }
                switch (u) {
                case 1: cout<<"I";break;
                case 2: cout<<"II";break;
                case 3: cout<<"III";break;
                case 4: cout<<"IV";break;
                case 5: cout<<"V";break;
                case 6: cout<<"VI";break;
                case 7: cout<<"VII";break;
                case 8: cout<<"VIII";break;
                case 9: cout<<"IX";break;
                default: cout<<"";
                }
            }
        }
}