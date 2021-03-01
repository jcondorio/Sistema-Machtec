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
        PEDIDO(string,ADMINISTRADOR*,PRODUCTO*,int,int);
        string getfechaPed();
        ADMINISTRADOR* getAdmin();
        int getcantidadped();
        PRODUCTO* getProd();
        ~PEDIDO();
    private:
        string fechaPed;
        ADMINISTRADOR *admin;
        PRODUCTO *producto;
        int cantidad;
        int subtot;
};

#endif // PEDIDO_H


