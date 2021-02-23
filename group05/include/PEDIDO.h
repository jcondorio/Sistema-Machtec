#ifndef PEDIDO_H
#define PEDIDO_H
#include<string>
#include<iostream>
using namespace std;
class ADMINISTRADOR;
class PRODUCTO;

class PEDIDO
{
    public:
        PEDIDO(string,ADMINISTRADOR*,PRODUCTO*);
        string getfechaPed();
        ADMINISTRADOR* getAdmin();
        PRODUCTO* getProd();
        ~PEDIDO();
    private:
        string fechaPed;
        ADMINISTRADOR *admin;
        PRODUCTO *producto;
};

#endif // PEDIDO_H


