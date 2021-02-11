#include<iostream>
#include<stdlib.h>
using namespace std;

class Comprobante
{
		private:
			string Nro_comprobante;
			string Fecha;
			string Nom_Cliente;
			string Nom_Producto;
			int Cantidad;
			int Subtotal_Precio;
			int Costo_Total
			int igv;
		public:
			Persona(string);
			int Cal_CostoTotal();
			int Cal_Subtotal();
			int Cal_igv();
};

Persona::Persona(string numc, string f, string nombc, string nombp, int c)
{
	Nro_comprobante=numc;
	Fecha=f;
	Nom_Cliente=nombc;
	Nom_Producto=nombp;
	Cantidad=c;
	int Subtotal_Precio;
	Costo_Total=0;
	igv=0;
}
