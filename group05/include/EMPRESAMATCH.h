#ifndef EMPRESAMATCH_H
#define EMPRESAMATCH_H

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
        void mostrarproductoscomprador();
        bool crearPedido(string,string,string);
        int buscarUsu(string);
        int buscarProducto(string);
        ~EMPRESAMATCH();
    private:
        vector<PRODUCTO*> listaProductos;
        vector<USUARIO*> listaUsu;

};

#endif // EMPRESAMATCH_H


