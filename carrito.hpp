#include <iostream>
#include <vector>
#include "producto.hpp"
using namespace std;

class Carrito {

    private:
        vector<Producto> _productos;

    public:
//------------Constructores----------------
        Carrito(void) {}

        Carrito(vector<Producto> productos) {
            setProductos(productos);
        }

//---------------Sets----------------
        void setProductos(vector<Producto> productos) {
            _productos=productos;
        }  

//---------------Gets----------------
        vector<Producto> getProductos(void) {
            return _productos;
        }

//---------------Metodos----------------
        void agregarProducto(Producto producto) {
            _productos.push_back(producto);
        }

        //Calcula el total con las propiedad de los precios de nuestra lista de productos
        double calcularTotal(vector<Producto> _productos) {
          double total = 0;
          for (Producto producto : _productos) {
              total = total + producto.getPrecio();
          }
            return total;
        }

        void impimir(void) {
            cout << "Productos en el carrito: " << endl;
            cout << endl;
            //PODRIA MEJORAR LA LOGICA AQUI, PARA NO MOSTRAR EL PRODUCTO REPETIDO SINO SU CANTIDAD Y RESUMEN DEL PRECIO
            for (Producto producto : _productos) {
                cout << "Producto: " << producto.getNombre() << endl;
                cout << "Precio: " << producto.getPrecio() << endl;
            }
        }

        void pagar(void){
            cout << endl;
            cout << "Su total a pagar es de: " << calcularTotal(_productos) << endl;
            cout << endl;
        }

};