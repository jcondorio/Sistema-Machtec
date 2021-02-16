#include<iostream>
#include<stdlib.h>
using namespace std;
class empresaMATCH
  {
    private:
    	int id_catalogo;
    	string nombre_catalogo;
   	 	string usuarios;
   	 	string productos;
   	 	string pedidos;
 		public:
   	    	empresaMATCH(int,string,string,string,string);
       		void seleccionarproductocatalogo();
       		void accederpedidos();
   };
empresaMATCH::empresaMATCH(int _id_catalogo,string _nombre_catalogo,string _usuarios,string _productos,string _pedidos)
{
	id_catalogo=_id_catalogo;
	nombre_catalogo=_nombre_catalogo;
	usuarios=_usuarios;
	productos=_productos;
	pedidos=_pedidos;
}
void empresaMATCH::seleccionarproductocatalogo()
{
	cout<<"Producto : "<<productos<<endl;
}
void empresaMATCH::accederpedidos()
{
	cout<<"Pedidos : "<<pedidos<<endl;
}
