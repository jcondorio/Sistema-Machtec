#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include "producto.h"
using namespace std;

class Comprobante {
		private:
			string fecha;
			string Nro_Comprobante;
			string Nom_Cliente;
			string List_Productos[10];
			int Cant;
			float CostoTotal;
			float Subtotal;
			float igv;
		public:
			Comprobante();
			Comprobante(string, string, string, string);
			int Cal_Cantidad(producto);
			void Mostrar_Comprobante(string);
			float Cal_Total;
			float Cal_Sub;
			float Cal_igv;
};

Comprobante::Comprobante(string _fecha, string Nro_Comprobante_, string Nom_Cliente_, string List_Productos_)
{
	int i;
	fecha=_fecha;
	Nro_Comprobante=Nro_Comprobante_;
	Nom_Cliente=Nom_Cliente_;
	List_Productos[i];
}



