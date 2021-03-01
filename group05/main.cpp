#include <iostream>
#include "USUARIO.h"
#include "ADMINISTRADOR.h"
#include "PRODUCTO.h"
#include "PEDIDO.h"
#include "EMPRESAMATCH.h"
#include "COMPROBANTE.h"
#include <conio.h>
#include <string>
using namespace std;
void funcionAdmin();
string usuu,nompro,contra;
int op,ss,cantidad;
ADMINISTRADOR *a[10];
PRODUCTO *p[10];
int acont=4;
int pcont=4;
int nrocomp=0;
EMPRESAMATCH em1;
EMPRESAMATCH comp;

int main()
{
    string contraseniamain,idmain,nombremain,dirmain,emailmain;
    int dnimain,nromain,telmain;

    a[1]=new ADMINISTRADOR("123","jmco",1,"johan","AltoAlianza",992862570,"marcos@unjbg",72230547);
    a[2]=new ADMINISTRADOR("123a","123a",2,"marcos","AltoAlianza",992862570,"marcos@unjbg",72230547);
    a[3]=new ADMINISTRADOR("123b","123b",3,"condori","AltoAlianza",992862570,"marcos@unjbg",72230547);
    p[1]=new PRODUCTO("memoriaram","kingston","dsadsa",100,10,"impactoimport",false);
    p[2]=new PRODUCTO("disco","kingston","dsadsa",100,10,"impactoimport",false);
    p[3]=new PRODUCTO("case","kingston","dsadsa",100,10,"impactoimport",false);

    em1.agregarUsuario(a[1]);
    em1.agregarUsuario(a[2]);
    em1.agregarUsuario(a[3]);
    em1.agregarProducto(p[1]);
    em1.agregarProducto(p[2]);
    em1.agregarProducto(p[3]);
    //em1.mostrarUsu();
    //system("pause");
    do
    {
        system("cls");
        em1.mostrarProductos();
        cout<<"estas registrado?"<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>>op;
        if(op==1)
        {
            cout<<"que tipo de usuario eres?"<<endl;
            cout<<"1. administrador"<<endl;
            cout<<"2. cliente natural"<<endl;
            cout<<"3. cliente empresa"<<endl;
            cin>>op;
            switch(op)
            {
                case 1:
                    funcionAdmin();
                    break;
                case 2:
                    break;
                case 3:
                    break;
            }
        }
        else
        {
            cout<<"deseas registrarte?"<<endl;
            cout<<"1. si"<<endl;
            cout<<"2. no"<<endl;
            cin>>op;
            if(op==1)
            {
                cout<<"deseas registrarte?"<<endl;
                cout<<"1. administrador"<<endl;
                cout<<"2. cliente natural"<<endl;
                cout<<"3. cliente enpresa"<<endl;
                cin>>op;
                    switch(op)
                    {
                    case 1:
                        getchar();
                        cout<<"IDusuario : "<<endl;
                        cin>>idmain;
                        cout<<"contrasenia : "<<endl;
                        cin>>contraseniamain;
                        cout<<"nroadmin : "<<endl;
                        cin>>nromain;
                        cout<<"nombre admin : "<<endl;
                        cin>>nombremain;
                        cout<<"direccion admin :"<<endl;
                        cin>>dirmain;
                        cout<<"telefono admin : "<<endl;
                        cin>>telmain;
                        cout<<"email admin : "<<endl;
                        cin>>emailmain;
                        cout<<"dni admin : "<<endl;
                        cin>>dnimain;
                        a[acont]=new ADMINISTRADOR(idmain,contraseniamain,nromain,nombremain,dirmain,telmain,emailmain,dnimain);
                        em1.agregarUsuario(a[acont]);
                        acont++;
                        em1.mostrarUsu();
                        system("pause");
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    }

            }
            else
            {
                cout<<"gracias por su visita vuelva pronto"<<endl;
            }
        }
    }
    while(true);
    system("pause");
    return 0;
}


void funcionAdmin()
{
    cout<<"ingresar usuario admin:";
    cin>>usuu;
    cout<<"ingrese contrasenia :";
    cin>>contra;
    em1.buscarUsu(usuu);
    em1.buscarContraUsu(contra);
    cout<<em1.buscarUsu(usuu)<<endl;
    cout<<em1.buscarContraUsu(contra)<<endl;
    if(em1.buscarUsu(usuu)>=0 && em1.buscarContraUsu(contra)>=0)
    {

        cout<<"menu admin"<<endl;
                        cout<<"1. crear venta"<<endl;
                        cout<<"2. gestionar productos"<<endl;
                        cin>>op;
                        if(op==1)
                        {
                            do
                                {
                                    system("cls");
                                    em1.mostrarProductos();
                                    cout<<"ingrese nombre del producto : "<<endl;
                                    cin>>nompro;
                                    cout<<"ingrese la cantidad : "<<endl;
                                    cin>>cantidad;
                                    em1.crearPedido("20/20/20",usuu,nompro,cantidad);
                                    //em1.mostrarProductos();
                                        em1.mostrarproductoscomprador();
                                    cout<<"desea seguir comprando?"<<endl;
                                    cin>>ss;
                                }
                                while(ss==1);
                                em1.crearComprobante(usuu,nrocomp);
                                nrocomp++;
                        }
                        else
                        {
                            int cantproo,precioproo;
                            string nomproo,descproo,marcaproo,provproo;
                            cout<<"elija una opccion"<<endl;
                            cout<<"1. agregar nuevo producto"<<endl;
                            cout<<"2. aumentar productos a uno existente";
                            cin>>op;
                            if(op==1)
                            {

                                cout<<"nombre del producto"<<endl;
                                cin>>nomproo;
                                cout<<"descripcion del producto"<<endl;
                                cin>>descproo;
                                cout<<"marca del producto"<<endl;
                                cin>>marcaproo;
                                cout<<"precio del producto"<<endl;
                                cin>>precioproo;
                                cout<<"cantidad del producto"<<endl;
                                cin>>cantproo;
                                cout<<"proveedor del producto"<<endl;
                                cin>>provproo;
                                p[pcont]=new PRODUCTO(nomproo,descproo,marcaproo,precioproo,cantproo,provproo,false);
                                em1.agregarProducto(p[pcont]);
                                pcont++;
                            }
                            else
                            {
                                cout<<"nombre del producto"<<endl;
                                cin>>nomproo;
                                cout<<"cantidad del producto"<<endl;
                                cin>>cantproo;
                                em1.aniadircantidad(nomproo,cantproo);
                            }

                        }



    }
    else
    {
        cout<<"incorrecto"<<endl;
        system("pause");
    }
}
