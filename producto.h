#include<iostream>
#include<stdlib.h>
using namespace std;

class producto
{
		private:
			string id_producto;
			string nom_producto;
			string descripcion;
			string marca;
			int precio;
			int cantidad;
			string proveedor;
		public:
			
			producto(string,string,string,string,int,int,string);
			void visualizarProducto();
			int getPrecioProducto();
			string getNombreProducto();
};

producto::producto(string _id_producto,string _nom_producto,string _descripcion, string _marca, int _precio,int _cantidad, string _proveedor)
{
	id_producto=_id_producto;
	nom_producto=_nom_producto;
	descripcion=_descripcion;
	marca=_marca;
	precio=_precio;
	cantidad=_cantidad;
	proveedor=_proveedor;
}
int producto::getPrecioProducto()
{
	return precio;
}
string producto::getNombreProducto()
{
	return nom_producto;
}
void producto::visualizarProducto()
{
	cout<<"ideproducto :"<<id_producto;
	cout<<"\n";
	cout<<"nom_producto: "<<nom_producto;
	cout<<"\n";
	cout<<"descripcion: "<<descripcion;
	cout<<"\n";
	cout<<"marca : "<<marca;
	cout<<"\n";
	cout<<"precio : "<<precio;
	cout<<"\n";
	cout<<"cantidad : "<<cantidad;
	cout<<"\n";
	cout<<"Costo_total : "<<proveedor;
	cout<<"\n";	
}
