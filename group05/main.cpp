#include <iostream>
#include "USUARIO.h"
#include "ADMINISTRADOR.h"
#include "PRODUCTO.h"
#include "PEDIDO.h"
#include "EMPRESAMATCH.h"
using namespace std;

int main()
{
string usuu,nompro;
int op,ss;
    ADMINISTRADOR a1("123","123","123");
    ADMINISTRADOR a2("123a","123a","123");
    ADMINISTRADOR a3("123b","123b","123");
    PRODUCTO p1("memoriaram","kingston","dsadsa",100,10,"impactoimport");
    PRODUCTO p2("memoriaram1","kingston","dsadsa",100,10,"impactoimport");
    PRODUCTO p3("memoriaram2","kingston","dsadsa",100,10,"impactoimport");
    EMPRESAMATCH em1;
    em1.agregarUsuario(&a1);
    em1.agregarUsuario(&a2);
    em1.agregarUsuario(&a3);
    em1.agregarProducto(&p1);
    em1.agregarProducto(&p2);
    em1.agregarProducto(&p3);
    cout<<"ingresar usuario:";
    cin>>usuu;
    em1.buscarUsu(usuu);
    if(em1.buscarUsu(usuu)>=0)
    {
        em1.mostrarProductos();
        cout<<"desea hacer un pedido?\n 1. si \n 2. no"<<endl;
        cin>>op;
        if(op==1)
        {
            do
            {
                cout<<"ingrese nombre del producto : "<<endl;
            cin>>nompro;
            em1.crearPedido("20/20/20",usuu,nompro);
            //em1.mostrarProductos();
                em1.mostrarproductoscomprador();
            cout<<"desea seguir comprando?"<<endl;
            cin>>ss;
            }
            while(ss==1);
        }
        else
        {
            cout<<"gracias por su estadia vuelva pronto"<<endl;
        }

    }
    else
    {
        cout<<"incorrecto"<<endl;
    }
    system("pause");
    return 0;
}
