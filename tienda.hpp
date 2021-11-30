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
        string tiposDeProducto[2];
        string nombresDeProducto[2];
        vector<Producto> catalogo;

        Tienda(void) {
            tiposDeProducto[2] = {"Tipo1", "Tipo2"}; //Definir valores y cantidad (en clase)
            nombresDeProducto[2] = {"Nombre1", "Nombre2"}; //Definir valores y cantidad (en clase)
        }

        void generarCatalogo(void) {
            for (int i = 0; i < 100; i++) {
                string nombre = nombresDeProducto[rand() % 2];
                string tipo = tiposDeProducto[rand() % 2];
            }
        }
        

};