#include<iostream>
#include<stdlib.h>
#include "comprobante1.h"
#include "producto.h"
#include "natural.h"
#include "registropago.h"
using namespace std;
int main()
{
	natural cl1=natural("cli001","AlfonsoUgarte",99282570,"marcos@123","operativo","johan","marcos","10/10/11",72230547);
	producto p1=producto("p01","ram","vendemenos","toyota",100,100,"patricio");
	string c=p1.getNombreProducto();
	string a=cl1.getnombre();
	int b=p1.getPrecioProducto();
	int subtot=10*b;
	int igve=0.18*subtot;
	Registropago r1=Registropago("tarjeta",c,1,1);
	comprobante1 co1=comprobante1("co01","10/10/10",a,"chapatin",10,subtot,subtot,igve);
	
	cout<<"\n";
	cout<<"registro del comprobante\n";
	cout<<"-------------------------\n";
	co1.visualizarComprobante();
	
	
	cout<<"registro del pago\n";
	cout<<"-------------------------\n";
	r1.registrarpago();
	
}
