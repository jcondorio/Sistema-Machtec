#include "ADMINISTRADOR.h"

ADMINISTRADOR::ADMINISTRADOR(string _idUsu,string _contraUsu,string _nomAdmin):USUARIO(_idUsu,_contraUsu)
{
    nomAdmin=_nomAdmin;
}
string ADMINISTRADOR::getNomadmin()
{
    return nomAdmin;
}
void ADMINISTRADOR::mostrarUsu()
{
    cout<<"nombre admin : "<<nomAdmin<<endl;
    cout<<endl;
}
void ADMINISTRADOR::aniadirPedido(PEDIDO *ped)
{
    listaPedido.push_back(ped);
}
ADMINISTRADOR::~ADMINISTRADOR()
{
    //dtor
}

