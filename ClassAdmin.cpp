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
			String	Apellido;
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

