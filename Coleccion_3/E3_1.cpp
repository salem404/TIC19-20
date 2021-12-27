#include <iostream>
using namespace std;

void nota(double n1, double n2);

int main() {
    double n1,n2;
    cout<<"Calculo nota de la asignatura"<<endl<<endl<<"Nota de las practicas: ";
    cin>>n1;
    cout<<"Nota de las pruebas: ";
    cin>>n2;
    cout<<endl;
    nota (n1,n2);
    return 0;
}

void nota(double n1, double n2){
    int n;
    n=n1*0.4+n2*0.6;
    switch (n){
        case 0:
            cout<<n<<" Suspenso";
            break;
        case 1:
            cout<<n<<" Suspenso";
            break;
        case 2:
            cout<<n<<" Suspenso";
            break;
        case 3:
            cout<<n<<" Suspenso";
            break;
        case 4:
            cout<<n<<" Suspenso";
            break;
        case 5:
            cout<<n<<" Aprobado";
            break;
        case 6:
            cout<<n<<" Bien";
            break;
        case 7:
            cout<<n<<" Notable";
            break;
        case 8:
            cout<<n<<" Notable";
            break;
        case 9:
            cout<<n<<" Sobresaliente";
            break;
        case 10:
            cout<<n<<" Sobresaliente";
            break;
        default:
            cout<<"ERROR: NOTA NO VALIDA";
    }
}