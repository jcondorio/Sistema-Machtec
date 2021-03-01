#include "PRODUCTO.h"
#include "PEDIDO.h"
#include "ADMINISTRADOR.h"
#include<iostream>
using namespace std;

PRODUCTO::PRODUCTO(string _nomProd,string _descripcion,string _marca,int _precio,int _cantidad,string _proveedor,int _estado)
{
    nomProd=_nomProd;
    descripcion=_descripcion;
    marca=_marca;
    precio=_precio;
    cantidad=_cantidad;
    proveedor=_proveedor;
    estado=_estado;
}
bool PRODUCTO::getCancelado()
{
    return estado;
}
int PRODUCTO::getcantidad()
{
   return cantidad;
}
string PRODUCTO::getnomprod()
{
    return nomProd;
}
string PRODUCTO::getdescripcion()
{
    return descripcion;
}
string PRODUCTO::getmarca()
{
    return marca;
}
string PRODUCTO::getproveedor()
{
    return proveedor;
}
int PRODUCTO::getprecio()
{
    return precio;
}
PRODUCTO::~PRODUCTO()
{

}
void PRODUCTO::mostrarproductos()
{
    ADMINISTRADOR *adminaux;
    cout<<"nombre : "<<nomProd<<endl;
    cout<<"precio: "<<precio<<endl;
    cout<<"cantidad disponible : "<<cantidad<<endl;
    cout<<endl;
}
void PRODUCTO::setcantidadprod(int cantidadprod)
{
    cantidad=cantidad-cantidadprod;
}
void PRODUCTO::setaumentarprod(int aumentar)
{
    cantidad=cantidad+aumentar;
}
int PRODUCTO::mostrarpedidosusu(string nombr___)
{
    ADMINISTRADOR *adminaux;
    int __cantidad;
    int subtotal=0;
    int subtotalaux=0;
    if(listapedido.size()>0)
    {
        cout<<"lista de pedidos por producto : "<<endl;
        for(int j=0;j<listapedido.size();j++)
        {
            adminaux=listapedido[j]->getAdmin();
            __cantidad=listapedido[j]->getcantidadped();
            subtotalaux=0;
            if(adminaux->getIdusu()==nombr___)
            {
                cout<<"----------------------"<<endl;
                cout<<"nombre admin : "<<adminaux->getNomadmin()<<endl;
                cout<<"id usuario : "<<adminaux->getIdusu()<<endl;
                cout<<"cantidad coprada : "<<__cantidad<<endl;
                cout<<"nombre : "<<nomProd<<endl;
                cout<<"precio : "<<precio<<endl;
                subtotal=subtotal+precio*__cantidad;
                subtotalaux=subtotalaux+precio*__cantidad;
                cout<<"----------------------"<<endl;

                cout<<"subtotal: "<<subtotalaux<<endl;
                cout<<"----------------------"<<endl;
            }
            else
            {
                subtotal=0;
            }

        }

    }
    return subtotal;
}
void PRODUCTO::mostrarproductoscomprador()
{
    ADMINISTRADOR *adminaux;
    int __cantidad;
    if(listapedido.size()>0)
    {
        cout<<"valor de listapedido : "<<listapedido.size()<<endl;
        cout<<"lista de pedidos por producto : "<<endl;
        for(int j=0;j<listapedido.size();j++)
        {
            adminaux=listapedido[j]->getAdmin();
            __cantidad=listapedido[j]->getcantidadped();
            cout<<"->"<<j+1<<" : "<<adminaux->getNomadmin()<<endl;
            cout<<"->"<<j+1<<" : "<<adminaux->getIdusu()<<endl;
            cout<<"->"<<j+1<<" : "<<__cantidad<<endl;
            cout<<"nombre : "<<nomProd<<endl;
            cout<<"precio: "<<precio<<endl;
            cout<<"----------------------"<<endl;
        }
    }
    cout<<endl;
}

void PRODUCTO::aniadirPedido(PEDIDO *ped)
{
    listapedido.push_back(ped);
}
