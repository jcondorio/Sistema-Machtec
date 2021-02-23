#include "EMPRESAMATCH.h"
#include "USUARIO.h"
#include "PEDIDO.h"
#include "ADMINISTRADOR.h"
#include "PRODUCTO.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;
EMPRESAMATCH::EMPRESAMATCH()
{
    //ctor
}
void EMPRESAMATCH::agregarProducto(PRODUCTO *produc)
{
    listaProductos.push_back(produc);
}
void EMPRESAMATCH::agregarUsuario(USUARIO *usu)
{
    listaUsu.push_back(usu);
}
void EMPRESAMATCH::mostrarProductos()
{

    for(int i=0;i<listaProductos.size();i++)
    {
        listaProductos[i]->mostrarproductos();
    }
}
void EMPRESAMATCH::mostrarproductoscomprador()
{

    for(int i=0;i<listaProductos.size();i++)
    {
        listaProductos[i]->mostrarproductoscomprador();
    }
}


void EMPRESAMATCH::mostrarUsu()
{
    for(int i=0;i<listaUsu.size();i++)
    {
        listaUsu[i]->mostrarUsu();
    }
}

int EMPRESAMATCH::buscarUsu(string __idusu)
{
    for(int i = 0; i < listaUsu.size(); i++){
        if(listaUsu[i]->getIdusu() == __idusu)
            return i;
    }
    return -1;
}
int EMPRESAMATCH::buscarProducto(string __nombreP)
{
     for(int i = 0; i < listaProductos.size(); i++){
        if(listaProductos[i]->getnomprod() == __nombreP)
            return i;
    }
    return -1;
}
bool EMPRESAMATCH::crearPedido(string fecha,string __idusu, string __nombreP)
{
    PEDIDO *pedido__;
    ADMINISTRADOR *admin__;
    int usubusc=buscarUsu(__idusu);
    int prodbusc=buscarProducto(__nombreP);
    if(usubusc==-1 || prodbusc==-1)

        return false;

    admin__=(ADMINISTRADOR*) listaUsu[usubusc];
    pedido__=new PEDIDO(fecha,admin__,listaProductos[prodbusc]);
    listaProductos[prodbusc]->aniadirPedido(pedido__);
    admin__->aniadirPedido(pedido__);
    return true;
}


EMPRESAMATCH::~EMPRESAMATCH()
{
    //dtor
}


