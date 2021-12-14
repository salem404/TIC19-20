#include <iostream>
using namespace std;

int main(){
    double a,b,c,d;
    cout<<"Cuarto numero coincidiente con alguno de los tres primeros"<<endl<<"Introduzca primer numero"<<endl;
    cin>>a;
    cout<<"Introduzca segundo numero"<<endl;
    cin>>b;
    cout<<"Introduzca tercer numero"<<endl;
    cin>>c;
    cout<<"Introduzca cuarto numero"<<endl;
    cin>>d;
    if (a==d) {
        cout<<"Coincide con "<<a;
    } else
        if (b==d) {
            cout<<"Coincide con "<<b;
        } else
            if (c==d) {
                cout<<"Coincide con "<<c;
            } else
                cout<<"No coincide con ninguno";
}