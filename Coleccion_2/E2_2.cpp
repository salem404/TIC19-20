#include <iostream>
#include <math.h>
using namespace std;

void datos (double x,double y);
int main(){
    double a,b;
    cout<<"Intoduzca numeros para hacer la potencia de un numero al otro (en ese orden)"<<endl;
    cin>>a>>b;
    datos(a,b);
    return 0;
}
void datos(double x,double y){
    double m;
    m=pow(x,y);
    cout<<endl<<x<<" ^ "<<y<<" = "<<m;
}