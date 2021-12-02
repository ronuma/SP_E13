#include <iostream>
#include "producto.hpp"
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Tienda {
    private: 
        vector<Producto> _catalogo;

 // --------------------- PRODUCTOS QUE SE PUEDEN VENDER ---------------------------------
        Producto _pasta = Producto("Pasta de dientes", "Higiene personal", 35.50);
        Producto _cepillo = Producto("Cepillo de dientes", "Higiene personal", 42.30);
        Producto _desodorante = Producto("Desodorante en aerosol", "Higiene personal", 65.50);
        Producto _manzana = Producto("Manzana", "Alimentos", 12.20);
        Producto _cacahuates = Producto("Cacahuates japoneses", "Alimentos", 18.25);
        Producto _gorra = Producto("Gorra", "Vestimenta", 45.00);
        Producto _lentes = Producto("Lentes de sol", "Vestimenta", 81.65);

        Producto _opciones[7] = {_pasta, _cepillo, _desodorante, _manzana, _cacahuates, _gorra, _lentes};
// ----------------------------------------------------------------------------------------

    public:
        //Cliente cliente;
        //Carrito carrito;

        Tienda(void) {
        }

        void generarCatalogo(void) {
            srand((unsigned) time(0));

            for (int i = 0; i < 30; i++) {
                for (Producto producto : _opciones) {
                    if (producto.getNombre() == _catalogo[i].getNombre()) {
                        cout << _catalogo[i].getNombre() << endl;
                        cout << producto.getNombre() << endl;
                        _catalogo[i].enInventario++;
                    } else {
                        Producto producto = _opciones[rand() % 7];
                        _catalogo.push_back(producto);
                    }
                }
            }
        }
        
        void mostrarCatalogo(void) {
            for (Producto producto : _catalogo) {
                producto.imprimir();
            }            
        }
};