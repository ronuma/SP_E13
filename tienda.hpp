#include <iostream>
#include "producto.hpp"
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Tienda {
    public:
        //Cliente cliente;
        //Carrito carrito;
        Producto pasta = Producto("Pasta de dientes", "Higiene personal", 0, 35.50);
        Producto cepillo = Producto("Cepillo de dientes", "Higiene personal", 0, 42.30);
        Producto desodorante = Producto("Desodorante en aerosol", "Higiene personal", 0, 65.50);
        Producto manzana = Producto("Manzana", "Alimentos", 0, 12.20);
        Producto cacahuates = Producto("Cacahuates japoneses", "Alimentos", 0, 18.25);
        vector<Producto> catalogo;

        Tienda(void) {
        
        }

        void generarCatalogo(void) {
            for (int i = 0; i < 30; i++) {
            }
        }
        

};