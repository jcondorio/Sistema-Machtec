#include<iostream>
#include<stdlib.h>
#include"registropago.h"
#include"comprobantepago.h"
#include"empresaMATCH.h"
#include"pedido.h""
using namespace std;
int main()
{
	 Registropago rp1=Registropago("tarjeta","cuatro laptops",1,0);
	 Comprobantepago cp1=Comprobantepago(1234567,"siete","juancito","cinta",2,234,1234,17);
	 empresaMATCH em1=empresaMATCH(123498,"cuatrotres","manuel","soplete","asdw");
	 pedido p1=pedido(00123,"veinticinco","veintiseis","veinte",1,"a","asd");
	 em1.accederpedidos();
	 p1.visualizarpedido();
	 cp1.mostrarnrocomprobante();
	 rp1.registrarpago();
}

