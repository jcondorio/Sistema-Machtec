#include<iostream>
#include<stdlib.h>
using namespace std;
class Registropago
  {
     private:
        string formapago;
        string descripcion;
        bool estadopago;
        bool metodopago;
     public:
        Registropago(string,string,bool,bool);
        void registrarpago();
   };
Registropago::Registropago(string _formapago,string _descripcion,bool _metodopago,bool _estadopago)
{
  formapago=_formapago;
  descripcion=_descripcion;
  metodopago=_metodopago;
  estadopago=_estadopago;  
}
void Registropago::registrarpago()
{
  cout<<"\nForma de pago : "<<formapago<<endl;
  cout<<"\nMetodo de pago : "<<metodopago<<endl;
}

