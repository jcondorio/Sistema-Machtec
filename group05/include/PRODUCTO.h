#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class PEDIDO;
class PRODUCTO
{
    public:
        PRODUCTO(string,string,string,int,int,string,int);
        string getnomprod();
        string getdescripcion();
        string getmarca();
        int getprecio();
        int getcantidad();
        string getproveedor();
        void mostrarproductos();
        void mostrarproductoscomprador();
        void aniadirPedido(PEDIDO*);
        void setcantidadprod(int);
        bool getCancelado();
        int mostrarpedidosusu(string);
        void setaumentarprod(int);
        ~PRODUCTO();
    private:
        string nomProd;
        string descripcion;
        string marca;
        int precio;
        int cantidad;
        string proveedor;
        bool estado;
        vector <PEDIDO*> listapedido;
};

#endif // PRODUCTO_H



