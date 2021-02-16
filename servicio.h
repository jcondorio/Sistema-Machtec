#include<iostream>
#include<stdlib.h>
using namespace std;

class servicio
{
		private:
			string id_servicio;
			string nom_servicio;
			int precioServicio;
			int manoObra;
			string horario;
			string herramientas;
		public:
			
			servicio(string,string,int,int,string,string);
			void visualizarServicio();
};

servicio::servicio(string _id_servicio,string _nom_servicio,int _precioServicio,int _manoObra,string _horario,string _herramientas)
{
	id_servicio=_id_servicio;
	nom_servicio=_nom_servicio;
	precioServicio=_precioServicio;
	manoObra=_manoObra;
	horario=_horario;
	herramientas=_herramientas;
}

void servicio::visualizarServicio()
{
	cout<<"ideservicio :"<<id_servicio;
	cout<<"\n";
	cout<<"nom_producto: "<<nom_servicio;
	cout<<"\n";
	cout<<"precio servicio: "<<precioServicio;
	cout<<"\n";
	cout<<"mano de obra : "<<manoObra;
	cout<<"\n";
	cout<<"horario : "<<horario;
	cout<<"\n";
	cout<<"herramientas : "<<herramientas;
	cout<<"\n";
}
