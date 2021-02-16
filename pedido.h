#include<iostream>
#include<stdlib.h>
using namespace std;
class pedido
  {
    private:
    	int nro_pedido;
    	string	fechapedido;
    	string	fechaentrega;
    	string fechaanulacion;
    	bool estado;
    	string formaentrega;
    	string cargo;
    public:
    	pedido(int,string,string,string,bool,string,string);
		void estado_pedido();
		void visualizarpedido();
    	void crearpedido();
	};
pedido::pedido(int _nro_pedido,string _fechapedido,string _fechaentrega,string _fechaanulacion,bool _estado,string _formaentrega,string _cargo)
{
	nro_pedido=_nro_pedido;
	fechapedido=_fechapedido;
	fechaentrega=_fechaentrega;
	fechaanulacion=_fechaanulacion;
	estado=_estado;
	formaentrega=_formaentrega;
	cargo=_cargo;
}
void pedido::estado_pedido()
{
	cout<<"Estado del pedido : "<<estado<<endl;
}
void pedido::visualizarpedido()
{
	cout<<"Numero de pedido : "<<nro_pedido;
}

