#include <iostream>
#include <conio.h>
#include "cliente.h"

class natural : public cliente
{
	private :
		string nombreNatural,apellidoNatural;
		string fecha;
		int dni;
	public:
		natural(string,string,int,string,string,string,string,string,int);
		void visualizarNatural();		
};

natural::natural(string _id_cliente,string _direccion,int _telefono,string _email, string _estado,string _nombreNatural,string _apellidoNatural,string _fecha,int _dni) : cliente(_id_cliente,_direccion,_telefono,_email,_estado)
{
	nombreNatural=_nombreNatural;
	apellidoNatural=_apellidoNatural;
	fecha=_fecha;
	dni=_dni;
}
void natural::visualizarNatural()
{
	VisualizarCliente();
	cout<<"nombre :"<<nombreNatural;
	cout<<"\n";
	cout<<"apellido : "<<apellidoNatural;
	cout<<"\n";
	cout<<"fecha : "<<fecha;
	cout<<"\n";
	cout<<"dni : "<<dni;
	cout<<"\n";
}

int main()
{
	string __id_cliente,__direccion,__email,__estado,__nombreNatural,__apellidoNatural,__fecha;
	int __telefono,__dni;
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
	
	
	cout<<"nombre : ";
	cin>>__nombreNatural;
	cout<<"apellido : ";
	cin>>__apellidoNatural;
	cout<<"fecha : ";
	cin>>__fecha;
	cout<<"dni : ";
	cin>>__dni;
	natural darAlta=natural(__id_cliente,__direccion,__telefono,__email,__estado,__nombreNatural,__apellidoNatural,__fecha,__dni);
	darAlta.visualizarNatural();
	system("pause");
	return 0;
}

