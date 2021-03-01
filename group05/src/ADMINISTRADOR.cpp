#include "ADMINISTRADOR.h"

ADMINISTRADOR::ADMINISTRADOR(string _idUsu,string _contraUsu,int _nroAdmin,string _nomAdmin,string _dirAdmin,int _telAdmin,string _emailAdmin,int _dniAdmin):USUARIO(_idUsu,_contraUsu)
{
    nroAdmin=_nroAdmin;
    nomAdmin=_nomAdmin;
    dirAdmin=_dirAdmin;
    telAdmin=_telAdmin;
    emailAdmin=_emailAdmin;
    dniAdmin=_dniAdmin;
}
string ADMINISTRADOR::getNomadmin()
{
    return nomAdmin;
}
int ADMINISTRADOR::getnroAdmin()
{
    return nroAdmin;
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

