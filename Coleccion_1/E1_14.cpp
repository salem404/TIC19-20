#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Introduzca numero correspondiente a un mes"<<endl;
    cin>>n;
    switch (n) {
        case 1: cout<<"Corresponde con ENERO.";
        break;
        case 2:cout<<"Corresponde con FEBRER0.";
        break;
        case 3:cout<<"Corresponde con MARZO.";
        break;
        case 4:cout<<"Corresponde con ABRIL.";
        break;
        case 5:cout<<"Corresponde con MAYO.";
        break;
        case 6:cout<<"Corresponde con JUNIO.";
        break;
        case 7:cout<<"Corresponde con JULIO.";
        break;
        case 8:cout<<"Corresponde con AGOSTO.";
        break;
        case 9:cout<<"Corresponde con SEPTIEMBRE.";
        break;
        case 10:cout<<"Corresponde con OCTUBRE.";
        break;
        case 11:cout<<"Corresponde con NOVIEMBRE.";
        break;
        case 12:cout<<"Corresponde con DICIEMBRE.";
        break;
        default: cout<<"ERROR: Introduzca un valor valido (1-12)";
    };
}