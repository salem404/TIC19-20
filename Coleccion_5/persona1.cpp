#include "persona1.h"
#include <iostream>
using namespace std;

void persona1::leerDatos()
{
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<endl<<"Edad: ";
    cin>>edad;
}

void persona1::imprimirDatos(){
    cout<<"Me llamo "<<nombre<<" y tengo "<<edad<<" años";
}