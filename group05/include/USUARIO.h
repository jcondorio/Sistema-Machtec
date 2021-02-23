#ifndef USUARIO_H
#define USUARIO_H
#include<string>
#include<iostream>
using namespace std;
class USUARIO
{
    public:
        USUARIO(string,string);
        string getIdusu();
        string getContrausu();
        ~USUARIO();
        virtual void mostrarUsu()=0;

    private:
        string idUsu;
        string contraUsu;
};

#endif // USUARIO_H
