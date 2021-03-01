#ifndef EMPRESAMATCH_H
#define EMPRESAMATCH_H
#include "COMPROBANTE.h"
#include "PAGO.h"
#include<iostream>
#include<vector>
using namespace std;

class PRODUCTO;
class USUARIO;

class EMPRESAMATCH
{
    public:
        EMPRESAMATCH();
        void agregarProducto(PRODUCTO*);
        void agregarUsuario(USUARIO*);
        void mostrarProductos();
        void mostrarUsu();
        int buscarContraUsu(string);
        void mostrarproductoscomprador();
        bool crearPedido(string,string,string,int);
        int buscarUsu(string);
        int buscarProducto(string);
        bool crearComprobante(string,int);
        void aniadircantidad(string,int);
        ~EMPRESAMATCH();
    private:
        vector<PRODUCTO*> listaProductos;
        vector<USUARIO*> listaUsu;
        vector<COMPROBANTE*> listaComprobante;
        vector<PAGO*> listapagoem;

};

#endif // EMPRESAMATCH_H


