#include <iostream>

using namespace std;

class Cliente {

    private:
        string _Email, _Direccion;
    
    public:
//-----------Constructores----------
        Cliente(void){
            _Email = "";
         _Direccion = "";
        }

        Cliente(string Email, string Direccion ){
            setEmail(Email);
            setDireccion(Direccion);
        }
//-------------Sets-----------------
        void setEmail(string Email){
            _Email = Email;
        }
        void setDireccion(string Direccion){
            _Direccion = Direccion;
        }
        
//-------------Gets-----------------
        string getEmail(void){
            return _Email;
        }

        string getDireccion(void){
            return _Direccion;
        }
//-------------Metodos-----------------
        
        void imprimirCliente(void){
            cout<<"Su email es"<<_Email<<endl;
            cout<<" Direccion es"<<_Direccion<<endl;
        }


};