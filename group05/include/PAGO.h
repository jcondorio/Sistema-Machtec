#ifndef PAGO_H
#define PAGO_H
#include <vector>
#include <iostream>
using namespace std;

class PAGO
{
    public:
        PAGO(int,int,int);
        int getnroregistropago();
        int getformapago();
        int getmetodopago();
        void aniadirpago(PAGO*);
        ~PAGO();
    private:
        int nroRegitroPago;
        int formapago;
        int metodoPago;
        vector <PAGO*> listaPago;
};

#endif // PAGO_H
