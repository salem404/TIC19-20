#ifndef PERSONA2_H
#define PERSONA2_H

class persona2
{
    public:
        void leerDatos();
        void imprimirDatos();
    protected:
        char nombre[40];
        int edad;
};
#endif

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "persona2.h"

class empleado : protected persona2
{
    public:
        empleado();
        void leerEmp();
        void imprimirEmp();
    protected:
        char cargo[60];
        float salarioAnual;
};
#endif