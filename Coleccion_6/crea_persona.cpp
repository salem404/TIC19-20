#include <iostream>
#include "persona2.h"
using namespace std;

int main(){
    int respuesta= 0;
    cout<<"Desea crear una persona? 1: Si 2: No"<<endl;
    cin>>respuesta;
    if (respuesta==1){
        persona2 p;
        empleado e;
        p.leerDatos();
        cout<<endl<<"Desea que diga mi nombre y mi edad? 1: Si 2: No"<<endl;
        cin>>respuesta;
        if (respuesta==1){
            p.imprimirDatos();
        }
        cout<<endl<<endl<<"Tengo trabajo? 1: Si 2:No"<<endl;
        cin>>respuesta;
        if (respuesta==1){
            e.leerEmp();
            cout<<"Desea que diga mi cargo y mi sueldo? 1: Si 2: No"<<endl;
            cin>>respuesta;
            if(respuesta==1){
                e.imprimirEmp();
            }
        }
    }
}