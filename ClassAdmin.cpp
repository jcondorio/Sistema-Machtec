#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	class Administrador
	{
		private:
			String id_Admin;
			String Nombre;
			String Apellido;
			String Direccion;
			int	Telefono;
			String Email;
			String Estado;
			int Dni;
		public:
			Administrador(String,String,String,String,int,String,String,int);
			modificarAdmin();
	}
};
administrador::Administrador(String _id_Admin,String _nombre,String _Apellido,String _Direccion,int _telefono,String _Email,String _Estado)
{
	id_admin=_id_admin;
	Nombre=_nombre;
	Apellido=_Apellido;
	Direccion=_Direccion;
	telefono=_telefono;
	Email=_Email;
	Estado=_Estado;
}

void Persona::modificarAdmin()
{
	cout<<"nodificar administrador\n";
	cout<<"-------------------------\n";
	cout<<"datos del administrador\n";
	cout<<"nombre : "<<Nombre;
}
