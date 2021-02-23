#include "USUARIO.h"
using namespace std;
USUARIO::USUARIO(string _idUsu,string _contraUsu)
{
    idUsu=_idUsu;
    contraUsu=_contraUsu;
}
string USUARIO::getIdusu()
{
    return idUsu;
}
string USUARIO::getContrausu()
{
    return contraUsu;
}

USUARIO::~USUARIO()
{
    //dtor
}
