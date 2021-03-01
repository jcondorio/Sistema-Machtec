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
        ADMINISTRADOR(string,string,int,string,string,int,string,int);
        string getNomadmin();
        int getnroAdmin();
        void mostrarUsu();
        void aniadirPedido(PEDIDO*);
        ~ADMINISTRADOR();
    private:
        int nroAdmin;
        string nomAdmin;
        string dirAdmin;
        int telAdmin;
        string emailAdmin;
        int dniAdmin;
        vector <PEDIDO*> listaPedido;
};

#endif // ADMINISTRADOR_H
