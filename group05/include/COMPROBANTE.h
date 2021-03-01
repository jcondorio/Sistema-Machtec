#ifndef COMPROBANTE_H
#define COMPROBANTE_H
#include <vector>
#include <iostream>
using namespace std;

class COMPROBANTE
{
    public:
        COMPROBANTE(int,int,int,string);
        int getnrocomprobante();
        int gettotalprecio();
        int getigv();
        void aniadircomprobante(COMPROBANTE*);
        ~COMPROBANTE();
    private:
        int nroComprobante;
        int totalprecio;
        int igv;
        string usuario;
        vector <COMPROBANTE*> listacomp;
};

#endif // COMPROBANTE_H
