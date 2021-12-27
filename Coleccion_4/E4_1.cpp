#include <iostream>
using namespace std;

double imc(double p,double h);
void sobrepeso(double s);

int main(){
    int r;
    double p,h,s;
    cout<<"Calculo de indice de masa corporal"<<endl<<endl<<"Introduzca su peso en kg"<<endl;
    cin>>p;
    cout<<endl<<"Introduzca su altura en m "<<endl;
    cin>>h;
    if (imc(p,h)<18.5){
        cout<<"Su peso es insuficiente";
    } else if(imc(p,h)<25){
        cout<<"Su peso es normal";
    } else {
        s=imc(p,h);
        cout<<endl<<"Su peso esta por encima de lo saludable"<<endl<<endl<<"¿Desea saber su grado? (1:Si 2:No)"<<endl;
        cin>>r;
        switch (r){
            case 1: sobrepeso(s);
            break;
            default: cout<<"";
        }
    }
}

double imc(double p,double h){
    double imc;
    imc=p/(h*h);
    return imc;
}

void sobrepeso(double s){
    cout<<endl;
    if (s<27){
        cout<<"Tiene un sobrepeso de grado I";
    } else if(s<30) {
        cout<<"Tiene un sobrepeso de grado II (preobesidad)";
    } else if (s<35){
        cout<<"Tiene obesidad de tipo I";
    } else if (s<40){
        cout<<"Tiene obesidad de tipo II";
    } else if (s<50){
        cout<<"Tiene obesidad de tipo III (mórbida)";
    } else {
    cout<<"Tiene obesidad de tipo IV (extrema)";
    }

    cout<<endl<<"Le recomendamos unir una dieta variada con ejercicio para disminuir su peso";
}