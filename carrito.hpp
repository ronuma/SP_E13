#include <iostream>
#include <vector>
#include "producto.hpp"
using namespace std;

class Carrito {

    private:
        vector<Producto> _productos;
    public:
        Carrito(vector<Producto> productos){
            setProductos(productos);

        }
//---------------Sets----------------
        void setProductos(vector<Producto> productos){
            _productos=productos;
        }  
//---------------Gets----------------
        vector<Producto> getProductos(void){
            return _productos;
        }
//---------------Metodos----------------
        void agregarProducto(Producto producto){
            _productos.push_back(producto);
        }
        //calcule el total con las propiedad de los precios de nuestra lista de productos
        double calcularTotal(vector<Producto> _productos) {
          double total = 0;
          for (Producto producto : _productos)
          {
              total = total + producto.getPrecio();
          }
            return total;
        }

        void impimir(void){
            cout << "Productos en el carrito: " << endl;
            for (Producto producto : _productos) {
                producto.imprimir();
            }
        }
        void pagar(void){
            cout<<"Su total a pagar es de "<<calcularTotal(_productos)<<endl;
        }

};