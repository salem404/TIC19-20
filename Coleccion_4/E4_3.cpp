#include <iostream>
using namespace std;

double nm(double nc, double nb);

int main(){
    string ng;
    double nc,nb,ne1,ne2;
    cout<<"Calculo de nota de selectividad para entrar al grado deseado"<<endl<<"Introduzca nombre del grado"<<endl;
    cin>>ng;
    cout<<endl<<"Introduzca la ultima nota de corte del grado"<<endl;
    cin>>nc;
    cout<<endl<<"Introduzca nota media de bachillerato"<<endl;
    cin>>nb;
    cout<<endl<<"La nota minima necesaria en selectividad para entrar en el grado es "<<nm(nc,nb);
}

double nm(double nc, double nb){
    double nn;
    nn=(nc-2-nb*0.6)*0.4;
    return nn;
}