#include "COMPROBANTE.h"
#include "ADMINISTRADOR.h"
#include "EMPRESAMATCH.h"
#include <iostream>
using namespace std;
COMPROBANTE::COMPROBANTE(int _nroComprobante,int _totalprecio,int _igv,string usuario__)
{
    nroComprobante=_nroComprobante;
    totalprecio=_totalprecio;
    igv=_igv;
    usuario=usuario__;
}
int COMPROBANTE::getnrocomprobante()
{
    return nroComprobante;
}
void COMPROBANTE::aniadircomprobante(COMPROBANTE *comp)
{
    listacomp.push_back(comp);
}
int COMPROBANTE::gettotalprecio()
{
    return totalprecio;
}
int COMPROBANTE::getigv()
{
    return igv;
}
COMPROBANTE::~COMPROBANTE()
{
    //dtor
}
