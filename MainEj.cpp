#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
//#include "Comprobante.h"
#include "producto.h"




int main()
{
	//Ejemplo de una lista de productos que eligió el cliente
	producto list_[10];
	list_[0]= producto("p1",100,"monitor","24''| IPS | VGA-HDMI|F24T350FHL","Samsung","Proveedor 1",20);
	list_[1]= producto("p1",100,"monitor","24''| IPS | VGA-HDMI|F24T350FHL","Samsung","Proveedor 1",20);
	list_[2]= producto("p2",10,"mouse","GAMING A-DATA RGB XPG INFAREX M20", "Razer","Proveedor 2",43);
	list_[3]= producto("p2",10,"mouse","GAMING A-DATA RGB XPG INFAREX M20","Razer","Proveedor 2",43);
	list_[4]= producto("p2",10,"mouse","GAMING A-DATA RGB XPG INFAREX M20","Razer","Proveedor 2",43);
	list_[5]= producto("p4",200,"laptop","VIVOBOOK 14 M413D-WS51 RYZEN 5-3500U 8GB 256GB SSD 14'' FHD WINDOWS 10","ASUS","Proveedor 1",13);
	list_[6]= producto("p4",200,"laptop","VIVOBOOK 14 M413D-WS51 RYZEN 5-3500U 8GB 256GB SSD 14'' FHD WINDOWS 10","ASUS","Proveedor 1",13);
	list_[7]= producto("",0,"","","","",0);
	list_[8]= producto("",0,"","","","",0);
	list_[9]= producto("",0,"","","","",0);	
	
	Comprobante c;
	for(int i=0; i<10; i++){
				if(list_[i].Dev_IdProd()==list_[i+1].Dev_IdProd()){
					c.
			}
			else{
			}
	}
	c.Mostrar_Comprobante.
	if(list_[0].Dev_NombProd()==list_[8].Dev_NombProd()){
		cout<<"v"<<endl;
	}
	else{
		cout<<"f"<<endl;
	}
	cout<<list_[3].Dev_NombProd()<<endl;
	system("PAUSE");
	return 0;
}
