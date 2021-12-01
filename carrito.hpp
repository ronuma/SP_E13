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
        //calcule el total con las propiedad de los precion de nuestra lista de productos
        double calcularTotal(vector<Producto> _productos){
          double total = 0;
          for (int i = 0; i < _productos.size(); i++)
          {
              total = total + _productos[i].getPrecio();
          }
            return total;
        }
        void impimirCarrito(void){

        }
        


};