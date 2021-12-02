#include <iostream>
#include "producto.hpp"
#include "cliente.hpp"
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Tienda {
    private: 
        vector<Producto> _catalogo;
        Cliente _cliente;

 // --------------------- PRODUCTOS QUE SE PUEDEN VENDER ---------------------------------
        Producto _pasta = Producto("Pasta de dientes", "Higiene personal", 0, 35.50);
        Producto _cepillo = Producto("Cepillo de dientes", "Higiene personal", 0, 42.30);
        Producto _desodorante = Producto("Desodorante en aerosol", "Higiene personal", 0, 65.50);
        Producto _manzana = Producto("Manzana", "Alimentos", 0, 12.20);
        Producto _cacahuates = Producto("Cacahuates japoneses", "Alimentos", 0, 18.25);
        Producto _gorra = Producto("Gorra", "Vestimenta", 0, 45.00);
        Producto _lentes = Producto("Lentes de sol", "Vestimenta", 0, 81.65);

        Producto _opciones[7] = {_pasta, _cepillo, _desodorante, _manzana, _cacahuates, _gorra, _lentes};
// ----------------------------------------------------------------------------------------

    public:
//-----------Constructores----------
        Tienda(void) {}

        Tienda(Cliente cliente) {
            setCliente(cliente);
            _catalogo = generarCatalogo();
        }

//-------------Sets-----------------
    void setCliente(Cliente cliente) {
        _cliente = cliente;
    }

//-------------Gets-----------------
    Cliente getCliente(void) {
        return _cliente;
    }

    vector<Producto> getCatalogo(void) {
        return _catalogo;
    }

        vector<Producto> generarCatalogo(void) {
            srand((unsigned) time(0));
            for (int i = 0; i < 30; i++) {
                Producto producto = _opciones[rand() % 7];
                //ESTA SOLUCION NO SE ME HACE LO SUFICIENTEMENTE DINAMICA, ¿QUE PASA SI CAMBIA EL TAMAÑO DE OPCIONES?
                for (int j = 0; j < 7; j++) {   
                    if(producto.getNombre() == _opciones[j].getNombre() ) {
                        _opciones[j].enInventario++;
                    }
                }
            }
            for (Producto productoGenerado : _opciones) {
                _catalogo.push_back(productoGenerado);
            }
            return _catalogo;
        }
     

        void mostrarCatalogo(void) {
            int index = 0;
            cout << endl;
            cout << "Catalogo de productos: " << endl;
            cout << endl;
            for (Producto producto : _catalogo) {
                cout << "[" << index << "] ";
                producto.imprimir();
                index++;
            }            
        }
};