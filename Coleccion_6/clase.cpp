#include "persona2.h"
#include <iostream>
using namespace std;

void persona2::leerDatos()
{
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<endl<<"Edad: ";
    cin>>edad;
}

void persona2::imprimirDatos(){
    cout<<endl<<"Me llamo "<<nombre<<" y tengo "<<edad<<" anos";
}

empleado::empleado()
{
}

void empleado::leerEmp()
{
    cout<<"Cargo: ";
    cin>>cargo;
    cout<<endl<<"Sueldo: ";
    cin>>salarioAnual;
}
void empleado::imprimirEmp(){
    cout<<endl<<"Trabajo de "<<cargo<<" y mi sueldo es de "<<salarioAnual<<" euros";
}