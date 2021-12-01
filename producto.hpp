#include <iostream>

using namespace std;

class Producto {

    private:
        string _nombre, _tipo;
        double _precio;
    
    public:
        Producto(void) {
            _nombre = "";
            _tipo = "";
            _precio = 0.0;
        }

        Producto(string nombre, string tipo, double precio) {
            setNombre(nombre);
            setTipo(tipo);
            setPrecio(precio);
        }

// --------------SETS--------------------
        void setNombre(string nombre) {
            _nombre = nombre;
        }

        void setTipo(string tipo) {
            _tipo = tipo;
        }


        void setPrecio(double precio) {
            _precio = precio;
        }

// -------------GETS----------------------------
        string getNombre(void) {
            return _nombre;
        }

        string getTipo(void) {
            return _tipo;
        }

        double getPrecio(void) {
            return _precio;
        }

// ------------METODOS------------------

        void imprimir(void) {
            cout << endl;
            cout << _nombre << endl;
            cout << "Tipo: " << _tipo << endl;
            cout << "Precio: " << _precio << endl;
        }
};