#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>

using namespace std;

class producto{
	private:
		string Id_Producto;
		string Nom_Producto;
		float Precio;
		string Desc;
		string Marca;
		string Proveedor;
		int Cantidad;
	public:
		producto();
		producto(string,float, string, string, string, string, int);
		void actualizar_stock();
		void mostrar_Producto();
		void actualizar_proveedor();
		string Dev_NombProd();
		float Dev_Precio();
		string Dev_Descripcion();
		string Dev_Marca();
		string Dev_Proveedor();
};
producto::producto(){
}
producto::producto(string Id,float Precio_, string Nomb_, string desc_, string Marca_, string Proveedor_, int can){
	Id_Producto=Id;
	Precio=Precio_;
	Nom_Producto=Nomb_;
	Desc=desc_;
	Proveedor=Proveedor_;
	Marca=Marca_;
	Cantidad=can;
}

void producto::mostrar_Producto(){
	cout<<"Nombre del producto: "<<Nom_Producto<<endl;
	cout<<"Id de producto: "<<Id_Producto<<endl;
	cout<<"Cantidad del producto en stock: "<<Cantidad<<endl;
	cout<<"Descipción: "<<Desc<<endl;
	cout<<"Marca: "<<Marca<<endl;
	cout<<"Proveedor: "<<Proveedor<<endl;
}

void producto::actualizar_stock(){
	int t;
	cout<<"La cantidad de "<<Nom_Producto<<" era de "<<Cantidad<<" anteriormente."<<endl;
	cout<<"Cuánto de este producto se ha vendido?: ";
	cin>>t;
	Cantidad=Cantidad-t;
	cout<<"Actualmente hay en el stock "<<Cantidad<<" "<<Nom_Producto;
}
void producto::actualizar_proveedor(){
	if(Cantidad==0){
		Proveedor="";
	}
	else{
		string pr;
		cout<<"Para cambiar el proveedor de un producto, ingrese el nombre de su proveedor: ";
		cin>>pr;
		Proveedor=pr;
		cout<<"El actual proveedor ahora es "<<Proveedor<<".";
	}
}



string producto::Dev_NombProd(){
	return Nom_Producto;	
}

float producto::Dev_Precio(){
	return Precio;
}

string producto::Dev_Descripcion(){
	return Desc;	
}
string producto::Dev_Marca(){
	return Marca;	
}

string producto::Dev_Proveedor(){
	return Proveedor;	
}


