#include<iostream>
#include<stdlib.h>
#include "pedido.h"
#include "servicio.h"
#include "comprobante1.h"
#include "registropago.h"
#include "natural.h"
#include "producto.h"
using namespace std;

int main()
{
	
	natural na1=natural("cli001","altoAlianza",12345,"marcos@gmail","operativo","marcos","orellana","14/14/14",1236547);
	pedido p2=pedido(001,"10/10/10","20/20/20","------",1,"presencial","------");
	servicio ser1=servicio("ser001","soporte tecnico",100,1,"12/12/12","soplete");
	cout<<"visualizar el servicio\n";
	cout<<"-----------------------\n";
	ser1.visualizarServicio();
	producto p1=producto("p01","ram","vendemenos","toyota",100,100,"patricio");
	string nom=na1.getnombre();
	string prod=p1.getNombreProducto();
	int preprod=p1.getPrecioProducto();
	int subtot=preprod*10;
	int igve=0.18*subtot;
	comprobante1 co2=comprobante1("co001","13/13/13",nom,prod,10,subtot,subtot,igve);
	cout<<"visualizar el comprobante\n";
	cout<<"-----------------------\n";
	co2.visualizarComprobante();
	string c=p1.getNombreProducto();
	Registropago r2=Registropago("tarjeta",c,1,1);
	cout<<"visualizar el registro de pago\n";
	cout<<"-----------------------\n";
	r2.registrarpago();
	
}
