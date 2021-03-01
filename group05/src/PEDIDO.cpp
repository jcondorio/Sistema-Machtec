#include "PEDIDO.h"
#include "ADMINISTRADOR.h"
#include "PRODUCTO.h"
PEDIDO::PEDIDO(string _fechaPed,ADMINISTRADOR *_admin, PRODUCTO *_producto,int _cantidad,int _subtot)
{
    fechaPed = _fechaPed;
    admin=_admin;
    producto=_producto;
    cantidad=_cantidad;
    subtot=_subtot;
}
ADMINISTRADOR* PEDIDO::getAdmin()
{
    return admin;
}
PRODUCTO* PEDIDO::getProd()
{
    return producto;
}
string PEDIDO::getfechaPed()
{
    return fechaPed;
}
int PEDIDO::getcantidadped()
{
    return cantidad;
}
PEDIDO::~PEDIDO()
{
    //dtor
}
