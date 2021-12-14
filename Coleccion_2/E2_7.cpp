#include <iostream>
using namespace std;

int signo(int m, int d);
int main(){
    int d,m;
    cout<<"Signo zodiacal segun fecha de nacimiento"<<endl<<"Introduzca dia"<<endl;
    cin>>d;
    cout<<endl<<"Introduzca mes"<<endl;
    cin>>m;
    cout<<endl;
    signo(m,d);
}

int signo(int m, int d){
    switch(m){
        case 1:
            if(d<20) {
                cout<<"Sagitario";
            } else { 
                if (d<=31) {
                    cout<<"Capricornio";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }   
            }
            break;

        case 2:
            if(d<16) {
                cout<<"Capricornio";
            } else { 
                if (d<=29) {
                    cout<<"Acuario";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 3:
            if(d<11) {
                cout<<"Acuario";
            } else { 
                if (d<=31) {
                    cout<<"Piscis";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 4:
            if(d<18) {
                cout<<"Piscis";
            } else { 
                if (d<=30) {
                    cout<<"Aries";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 5:
            if(d<13) {
                cout<<"Aries";
            } else { 
                if (d<=31) {
                    cout<<"Tauro";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 6:
            if(d<21) {
                cout<<"Tauro";
            } else {
                if (d<=30) {
                cout<<"Geminis";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 7:
            if(d<20) {
                cout<<"Geminis";
            } else { 
                if (d<=31) {
                cout<<"Cancer";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 8:
            if(d<10) {
                cout<<"Cancer";
            } else {
                 if (d<=31) {
                cout<<"Leo";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 9:
            if(d<16) {
                cout<<"Leo";
            } else {
                if (d<=31) {
                    cout<<"Virgo";
                } else {
                cout<<"ERROR: DIA NO VALIDO";
                }
            }
            break;

        case 10:
            if (d<30) {
                cout<<"Virgo";
            } else 
                if (d<=31){
                    cout<<"Libra";
                } else {
                    cout<<"ERROR: DIA NO VALIDO";
                }
            break;

        case 11:
            if(d<23) {
                cout<<"Libra";
            } else {
                if(d<29){
                    cout<<"Escorpio";
                }else {
                    if (d<=31) {
                        cout<<"Ofiuco";
                    } else {
                        cout<<"ERROR: DIA NO VALIDO";
                    }
                }
            }
            break;

        case 12:
            if(d<17) {
                cout<<"Ofiuco";
            } else {
                if (d<=31) {
                    cout<<"Sagitario";
                } else {
                    cout<<"ERROR: DIA NOVALIDO";
                }
            }
            break;

        default:
            cout<<"ERROR: MES NO VALIDO";
        }
}