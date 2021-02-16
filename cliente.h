#include <iostream>
#include <conio.h>
using namespace std;

class cliente 
{
	private: 
		string id_cliente;
		string direccion;
		int telefono;
		string email;
		string estado;	
	public:
		cliente(string,string,int,string,string);
		void darBajaCliente();
		void ModificarCliente();
		void VisualizarCliente();
};

cliente::cliente(string _id_cliente,string _direccion,int _telefono,string _email, string _estado)
{
	id_cliente=_id_cliente;
	direccion=_direccion;
	telefono=_telefono;
	email=_email;
	estado=_estado;
	
}
void cliente::VisualizarCliente()
{
	cout<<"id cliente :"<<id_cliente;
	cout<<"\n";
	cout<<"direccion : "<<direccion;
	cout<<"\n";
	cout<<"telefono : "<<telefono;
	cout<<"\n";
	cout<<"email : "<<email;
	cout<<"\n";
	cout<<"estado : "<<estado;
	cout<<"\n";
}


