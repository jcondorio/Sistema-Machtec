#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
using namespace std;

class Comprobante {
		private:
			string fecha;
			string Nro_Comprobante;
			string Nom_Cliente;
			string List_Productos[];
			int Cant;
			float CostoTotal;
			float Subtotal;
			float igv;
		public:
			Comprobante();
			Comprobante(string, string, string, string);
			int Cal_Cantidad();
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
	for(i=0; i<10; i++){
		List_Productos=List_Productos_;	
	}
}

void Mostrar_Comprobante(string List_Products_){
	cout<<"Fecha: "<<Fecha<<endl;
	cout<<"Nro Comprobante: "<<Nro_Comprobante<<endl;
	cout<<"Cliente: "<<Nom_Cliente;
	for(i=0;i<10;i++){
		if(i==0){
			cout<<i+1<<". "<<List_Products_[i];
		}
		else{
			if(List_Products[i-1]!=List_Products[i]){
				cout<<i+1<<". "<<List_Products[i]
			}
		}
			
	}
	
}
float Cal_Total(float lisPrecios){
	floatlisPrecios	
}



