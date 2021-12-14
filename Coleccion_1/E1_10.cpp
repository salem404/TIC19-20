#include <iostream>
using namespace std;

int main(){
    char let;
    cout<<"¿Mayuscula o miniscula?"<<endl<<"Introduzca letra"<<endl;
    cin>>let;
    switch (let){
        case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':case 'g':case 'h':case 'i':case 'j':case
        'k':case 'l':case 'm':case 'n': case 'o':case 'p':case 'q':case 'r':case 's':case 't':case 'u':case 'v':case 'w':case
        'x':case 'y':case 'z':
            cout<<"Es minuscula"<<endl;
            break;
        default:
            cout<<"Es mayuscula"<<endl;
    }
}