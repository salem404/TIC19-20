#include <iostream>
using namespace std;

void multiplicacion (double x,double y);
int main(){
    double a,b;
    cout<<"Intoduzca numeros a multiplicar"<<endl;
    cin>>a>>b;
    multiplicacion (a,b);
    return 0;
}
void multiplicacion(double x,double y){
    double m;
    m=x*y;
    cout<<endl<<x<<" x "<<y<<" = "<<m;
}