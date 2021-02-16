#include <iostream>
#include <conio.h>
#include "cliente.h"

class natural : public cliente
{
	private :
		string nombreNatural,apellidoNatural;
		string fecha;
		int dni;
		natural *enlace;
	public:
		natural(string,string,int,string,string,string,string,string,int);
		void visualizarNatural();	
		string getnombre();
		
};
string natural::getnombre()
{
	return nombreNatural;
}
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


