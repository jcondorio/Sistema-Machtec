#include<iostream>
#include<stdlib.h>
using namespace std;

class comprobante1
{
		private:
			string Nro_comprobante;
			string Fecha;
			string Nom_Cliente;
			string nombre_producto;
			int cantidad_producto;
			int Subtotal_Precio;
			int Costo_Total;
			int igv;
		public:
			
			comprobante1(string,string,string,string,int,int,int,int);
			void visualizarComprobante();
			void setCantidad_producto();
			
};



comprobante1::comprobante1(string _nro_comprobante, string _fecha, string _nom_Cliente, string _nombre_producto, int _cantidad_producto,int _subtotal_precio,int _costo_total,int _igv)
{
	Nro_comprobante=_nro_comprobante;
	Fecha=_fecha;
	Nom_Cliente=_nom_Cliente;
	nombre_producto=_nombre_producto;
	cantidad_producto=_cantidad_producto;
	Subtotal_Precio=_subtotal_precio;
	Costo_Total=_costo_total;
	igv=_igv;
}

void comprobante1::visualizarComprobante()
{
	cout<<"nroComprobante :"<<Nro_comprobante;
	cout<<"\n";
	cout<<"nom_cliente: "<<Fecha;
	cout<<"\n";
	cout<<"nom_cliente: "<<Nom_Cliente;
	cout<<"\n";
	cout<<"nombre_producto : "<<nombre_producto;
	cout<<"\n";
	cout<<"cantidad_producto : "<<cantidad_producto;
	cout<<"\n";
	cout<<"Subtotal_precio : "<<Subtotal_Precio;
	cout<<"\n";
	cout<<"Costo_total : "<<Costo_Total;
	cout<<"\n";
	cout<<"igv : "<<igv;
	cout<<"\n";
	
}


