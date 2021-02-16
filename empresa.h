#include <iostream>
#include <conio.h>
#include "cliente.h"
class empresa : public cliente
{
	private: 
		string baseLegal,nombreComercial;
		int ruc;
	public:
		empresa(string,string,int,string,string,string,string,int);
		void visualizarEmpresa();
};


empresa::empresa(string _id_cliente,string _direccion,int _telefono,string _email, string _estado,string _baseLegal,string _nombreComercial,int _ruc) : cliente(_id_cliente,_direccion,_telefono,_email,_estado)
{
	baseLegal=_baseLegal;
	nombreComercial=_nombreComercial;
	ruc=_ruc;
}
void empresa::visualizarEmpresa()
{
	VisualizarCliente();
	cout<<"nombre :"<<baseLegal;
	cout<<"\n";
	cout<<"apellido : "<<nombreComercial;
	cout<<"\n";
	cout<<"dni : "<<ruc;
	cout<<"\n";
}

int main()
{
	string __id_cliente,__direccion,__email,__estado,__baseLegal,__nombreComercial;
	int __telefono,__ruc;
	cout<<"id cliente :";
	cin>>__id_cliente;
	cout<<"direccion : ";
	cin>>__direccion;
	cout<<"telefono : ";
	cin>>__telefono;
	cout<<"email : ";
	cin>>__email;
	cout<<"estado : ";
	cin>>__estado;
	
	
	cout<<"base Legal : ";
	cin>>__baseLegal;
	cout<<"nombre comercial : ";
	cin>>__nombreComercial;
	
	cout<<"dni : ";
	cin>>__ruc;
	empresa darAlta=empresa(__id_cliente,__direccion,__telefono,__email,__estado,__baseLegal,__nombreComercial,__ruc);
	darAlta.visualizarEmpresa();
	system("pause");
	return 0;
}

