#include "EMPRESAMATCH.h"
#include "USUARIO.h"
#include "PEDIDO.h"
#include "ADMINISTRADOR.h"
#include "PRODUCTO.h"
#include "COMPROBANTE.h"
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
bool EMPRESAMATCH::crearComprobante(string usuario__,int nrocompro)
{

    ADMINISTRADOR *admin_;
    PEDIDO *pedido_;
    COMPROBANTE *comp_f;
    PAGO *pago_f;
    int metodo,forma;
    int usubusc,prodbusc;
    int contarped;
    EMPRESAMATCH *buscador;
    usubusc=buscarUsu(usuario__);
    system("pause");
    int totalaux;
    int total=0;

    for(int i=0;i<listaProductos.size();i++)
    {
        totalaux=listaProductos[i]->mostrarpedidosusu(usuario__);
        total=total+totalaux;
    }
    int igv=total*0.18;

    cout<<"total : "<<total<<endl;
    cout<<"igv : "<<igv<<endl;
    cout<<"monto a pagar"<<total+igv<<endl;
    comp_f=new COMPROBANTE(nrocompro,total,igv,usuario__);
    listaComprobante.push_back(comp_f);
    listaComprobante[nrocompro]->aniadircomprobante(comp_f);

    cout<<"ingrese forma de pago :"<<endl;
    cout<<"1. tarjeta"<<endl;
    cout<<"2. boucher"<<endl;
    cout<<"3. efectivo"<<endl;
    cin>>forma;
    cout<<"ingrese metodo de pago :"<<endl;
    cout<<"1. un pago"<<endl;
    cout<<"2. por partes"<<endl;
    cin>>metodo;
    pago_f=new PAGO(nrocompro,forma,metodo);
    listapagoem.push_back(pago_f);
    listapagoem[nrocompro]->aniadirpago(pago_f);
    cout<<"gracias por su compra"<<endl;
    system("pause");
   return true;
}
void EMPRESAMATCH::aniadircantidad(string nombre_,int cantidad_)
{
    int prodbusc;
    prodbusc=buscarProducto(nombre_);
    listaProductos[prodbusc]->setaumentarprod(cantidad_);
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
    cout<<listaUsu.size()<<endl;
    for(int i = 0; i < listaUsu.size(); i++)
    {
        if(listaUsu[i]->getIdusu()==__idusu)
        {
            return i;
        }

    }
    return -1;
}
int EMPRESAMATCH::buscarProducto(string __nombreP)
{
     for(int i = 0; i < listaProductos.size(); i++){
        if((listaProductos[i]->getnomprod()) == __nombreP)
            return i;
    }
    return -1;
}
bool EMPRESAMATCH::crearPedido(string fecha,string __idusu, string __nombreP,int _cantidad)
{
    PEDIDO *pedido__;
    ADMINISTRADOR *admin__;
    PRODUCTO *producto__;
    int usubusc,prodbusc;
    usubusc=buscarUsu(__idusu);
    prodbusc=buscarProducto(__nombreP);
    if(_cantidad > listaProductos[prodbusc]->getcantidad())
    {
        return false;
    }
    listaProductos[prodbusc]->setcantidadprod(_cantidad);
    int preciocp=listaProductos[prodbusc]->getprecio();
    int sutot=preciocp*_cantidad;
    if(usubusc==-1 || prodbusc==-1)

        return false;

    admin__=(ADMINISTRADOR*) listaUsu[usubusc];
    pedido__=new PEDIDO(fecha,admin__,listaProductos[prodbusc],_cantidad,sutot);
    listaProductos[prodbusc]->aniadirPedido(pedido__);
    admin__->aniadirPedido(pedido__);
    return true;
}
int EMPRESAMATCH::buscarContraUsu(string __contraUsu)
{
    for(int i = 0; i < listaUsu.size(); i++){
        if(listaUsu[i]->getContrausu() == __contraUsu)
            return i;
    }
    return -1;
}


EMPRESAMATCH::~EMPRESAMATCH()
{
    //dtor
}
