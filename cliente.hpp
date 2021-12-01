#include <iostream>

using namespace std;

class Cliente {

    private:
        string _email, _direccion;
    
    public:
//-----------Constructores----------
        Cliente(void){
            _email = "";
            _direccion = "";
        }

        Cliente(string email, string direccion ){
            setEmail(email);
            setDireccion(direccion);
        }
//-------------Sets-----------------
        void setEmail(string email){
            _email = email;
        }
        void setDireccion(string direccion){
            _direccion = direccion;
        }
        
//-------------Gets-----------------
        string getEmail(void){
            return _email;
        }

        string getDireccion(void){
            return _direccion;
        }
//-------------Metodos-----------------

        void imprimirCliente(void){
            cout<<"Su email es"<<_email<<endl;
            cout<<" Direccion es"<<_direccion<<endl;
        }


};