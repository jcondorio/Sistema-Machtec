#include<iostream>
#include<stdlib.h>
using namespace std;
class Comprobantepago
  {	
  	 private:
        int nro_comprobante;
        string fecha_comprobante;
        string nom_cliente;
        string nom_producto;
        int cantidad_producto;
       	int subtotal_precio;
       	int costo_total;
       	int igv;
     public:
        Comprobantepago(int,string,string,string,int,int,int,int);
        void cal_costototal();
        void cal_subtotal();
        void cal_igv();
        void mostrarnrocomprobante();
   };
Comprobantepago::Comprobantepago(int _nro_comprobante,string _fecha_comprobante,string _nom_cliente,string _nom_producto,int _cantidad_producto,int _subtotal_precio,int _costo_total,int _igv )
{
	nro_comprobante=_nro_comprobante;
	cantidad_producto=_cantidad_producto;
	subtotal_precio=_subtotal_precio;
	costo_total=_costo_total;
	igv=_igv;
	fecha_comprobante=_fecha_comprobante;
	nom_cliente=_nom_cliente;
	nom_producto=_nom_producto;
}
void Comprobantepago::mostrarnrocomprobante()
{
  cout<<"\nNumero de comprobante : "<<nro_comprobante<<endl;
}
