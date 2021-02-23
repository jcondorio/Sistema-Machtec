#include "PEDIDO.h"
#include "ADMINISTRADOR.h"
#include "PRODUCTO.h"
PEDIDO::PEDIDO(string _fechaPed,ADMINISTRADOR *_admin, PRODUCTO *_producto)
{
    fechaPed = _fechaPed;
    admin=_admin;
    producto=_producto;
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
PEDIDO::~PEDIDO()
{
    //dtor
}
