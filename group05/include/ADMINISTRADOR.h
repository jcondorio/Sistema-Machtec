#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "USUARIO.h"
#include <vector>
#include <string>
using namespace std;
class PEDIDO;
class ADMINISTRADOR : public USUARIO
{
    public:
        ADMINISTRADOR(string,string,string);
        string getNomadmin();
        void mostrarUsu();
        void aniadirPedido(PEDIDO*);
        ~ADMINISTRADOR();
    private:
        string nomAdmin;
        vector <PEDIDO*> listaPedido;
};

#endif // ADMINISTRADOR_H
