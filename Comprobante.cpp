#include<iostream>>
#include<stdlib.h>
#include<Producto.h>
using namespace std;

class Comprobante
{
		private:
			string fecha;
			string Nro_Comprobante;
			string Nom_Cliente;
			Producto List_Productos[20];
		public:
			Comprobante(string, string, string, Producto [])
			int Cal_Cantidad(Producto []);
			void Mostrar_Comprobante();
};

Comprobante::Comprobante(string fecha_, string Nro_Comprobante_, string Nomb_Cliente_, Producto List_Productos_[]){
	Fecha=fecha_;
	Nro_Comprobante=Nro_Comprobante_;
	Nom_Cliente=Nom_Cliente_;
	List_Productos=List_Productos_;
	Cantidad=Cal_Cantidad(List_Productos_);
}

int Cal_Cantidad(Producto a[]){
	c=0;
	for(int i=0; i<20; i++){
		if(a.Precio[i]!=0){
			c=c+1;
		}
		else{
		}
	}
	return c;
}

void Mostrar_Comprobante(Producto List_Productos_a[]){
	cout<<"Cliente: "<<Nom_Cliente<<endl;
	cout<<"Fecha: "<<fecha<<endl;
	for(int j=0; j<20; j++){
		List_Productos_a[i].Ver_NombProd();
	}
	
	cout<<
}
