#ifndef SERVICIO_H
#define SERVICIO_H
#include <iostream>
using namespace std;
class SERVICIO
{
    public:
        SERVICIO(int,string,int,int,string,string,string);
        ~SERVICIO();

    private:
        int nroServicio;
        string nom_Servicio;
        int precioServicio;
        int can_manoObra;
        string fechainicio;
        string fechafin;
        string herramientas;
};

#endif // SERVICIO_H
