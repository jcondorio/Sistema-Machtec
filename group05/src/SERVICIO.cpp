#include "SERVICIO.h"

SERVICIO::SERVICIO(int _nroServicio,string _nom_Servicio,int _precioServicio,int _can_manoObra,string _fechainicio,string _fechafin,string _herramientas)
{
    nroServicio=_nroServicio;
    nom_Servicio=_nom_Servicio;
    precioServicio=_precioServicio;
    can_manoObra=_can_manoObra;
    fechainicio=_fechainicio;
    fechafin=_fechafin;
    herramientas=_herramientas;
}

SERVICIO::~SERVICIO()
{
    //dtor
}
