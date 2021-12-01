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

        // --------------------- PRODUCTOS QUE SE PUEDEN VENDER ---------------------------------
        Producto pasta = Producto("Pasta de dientes", "Higiene personal", 35.50);
        Producto cepillo = Producto("Cepillo de dientes", "Higiene personal", 42.30);
        Producto desodorante = Producto("Desodorante en aerosol", "Higiene personal", 65.50);
        Producto manzana = Producto("Manzana", "Alimentos", 12.20);
        Producto cacahuates = Producto("Cacahuates japoneses", "Alimentos", 18.25);
        Producto gorra = Producto("Gorra", "Vestimenta", 45.00);
        Producto lentes = Producto("Lentes de sol", "Vestimenta", 81.65);

        int pastas = 0; 
        int cepillos = 0;
        int desodorantes = 0;
        int manzanas = 0; 
        int cacahuatess = 0;
        int gorras = 0; 
        int lentess = 0;

        Producto opciones[7] = {pasta, cepillo, desodorante, manzana, cacahuates, gorra, lentes};
        // ----------------------------------------------------------------------------------------
        vector<Producto> catalogo;

        Tienda(void) {
        }

        void generarCatalogo(void) {
            srand((unsigned) time(0));

            for (int i = 0; i < 30; i++) {
                Producto producto = opciones[rand() % 7];
                catalogo.push_back(producto);
            }
        }
        
        void mostrarCatalogo(void) {

            //Cuenta cuantos productos hay de cada uno en el catalogo generado
            for (Producto producto : catalogo) {
                if(producto.getNombre() == "Pasta de dientes") {
                    pastas++;
                } else if (producto.getNombre() == "Cepillo de dientes") {
                    cepillos++;
                } else if (producto.getNombre() == "Desodorante en aerosol") {
                    desodorantes++;
                } else if (producto.getNombre() == "Manzana") {
                    manzanas++;
                } else if (producto.getNombre() == "Cacahuates japoneses") {
                    cacahuatess++;
                } else if (producto.getNombre() == "Gorra") {
                    gorras++;
                } else if (producto.getNombre() == "Lentes de sol") {
                    lentess++;
                }
             }
            
            //Imprimir los productos con su cantidad calculada
            pasta.imprimir();
            cout << "En inventario: " << pastas << endl;
            cepillo.imprimir();
            cout << "En inventario: " << cepillos << endl;
            desodorante.imprimir();
            cout << "En inventario: " << desodorantes << endl;
            manzana.imprimir();
            cout << "En inventario: " << manzanas << endl;
            cacahuates.imprimir();
            cout << "En inventario: " << cacahuatess << endl;
            gorra.imprimir();
            cout << "En inventario: " << gorras << endl;
            lentes.imprimir();
            cout << "En inventario: " << lentess << endl;
            
        }
};