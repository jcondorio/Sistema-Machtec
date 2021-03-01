#include "PAGO.h"

PAGO::PAGO(int _nroRegitroPago,int _formapago,int _metodoPago)
{
    nroRegitroPago=_nroRegitroPago;
    formapago=_formapago;
    metodoPago=_metodoPago;
}
int PAGO::getnroregistropago()
{
    return nroRegitroPago;
}
int PAGO::getformapago()
{
    return formapago;
}
int PAGO::getmetodopago()
{
    return metodoPago;
}
void PAGO::aniadirpago(PAGO *pago)
{
    listaPago.push_back(pago);
}

PAGO::~PAGO()
{
    //dtor
}
