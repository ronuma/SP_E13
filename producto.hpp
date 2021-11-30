#include <iostream>

using namespace std;

class Producto {

    private:
        string _nombre, _tipo;
        int _inventario;
        double _precio;
    
    public:
        //Preguntar al prof si hay que incluir constructor por defecto aunque no lo vayamos a usar

        Producto(string nombre, string tipo, int inventario, double precio) {
            setNombre(nombre);
            setTipo(tipo);
            setInventario(inventario);
            setPrecio(precio);
        }

// --------------SETS--------------------
        void setNombre(string nombre) {
            _nombre = nombre;
        }

        void setTipo(string tipo) {
            _tipo = tipo;
        }

        void setInventario(int inventario) {
            _inventario = inventario;
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

        int getInventario(void) {
            return _inventario;
        }

        double getPrecio(void) {
            return _precio;
        }

// ------------METODOS------------------

//falta el de agregar al carrito

        void imprimir(void) {
            cout << _nombre << endl;
            cout << "Tipo: " << _tipo << endl;
            cout << "Precio: " << _precio << endl;
            cout << "En inventario: " << _inventario << endl;
        }
};