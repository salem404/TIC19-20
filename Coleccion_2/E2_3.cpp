#include <iostream>
#include <math.h>
using namespace std;

void frakture (double x);
int main(){
    double a;
    cout<<"Intoduzca numero para obtener la parte decimal"<<endl;
    cin>>a;
    frakture(a);
    return 0;
}
void frakture(double x){
    double m;
    m=x-(int(x));
    cout<<endl<<"La parte decimal es "<<m;
}