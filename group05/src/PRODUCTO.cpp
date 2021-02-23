#include "PRODUCTO.h"
#include "PEDIDO.h"
#include "ADMINISTRADOR.h"
#include<iostream>
using namespace std;

PRODUCTO::PRODUCTO(string _nomProd,string _descripcion,string _marca,int _precio,int _cantidad,string _proveedor)
{
    nomProd=_nomProd;
    descripcion=_descripcion;
    marca=_marca;
    precio=_precio;
    cantidad=_cantidad;
    proveedor=_proveedor;
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
    if(listapedido.size()>0)
    {
        int i=0;
        cout<<"lista de pedidos por producto : "<<endl;
        for(int i=0;i<listapedido.size();i++);
        {
            adminaux=listapedido[i]->getAdmin();
            cout<<"->"<<i+1<<" : "<<adminaux->getNomadmin()<<endl;
        }
    }
    cout<<endl;
}
void PRODUCTO::mostrarproductoscomprador()
{
    ADMINISTRADOR *adminaux;

    if(listapedido.size()>0)
    {
        int i=0;
        cout<<"lista de pedidos por producto : "<<endl;
        for(int i=0;i<listapedido.size();i++);
        {
            adminaux=listapedido[i]->getAdmin();
            cout<<"->"<<i+1<<" : "<<adminaux->getNomadmin()<<endl;
            cout<<"nombre : "<<nomProd<<endl;
    cout<<"precio: "<<precio<<endl;
        }
    }
    cout<<endl;
}





void PRODUCTO::aniadirPedido(PEDIDO *ped)
{
    listapedido.push_back(ped);
}


