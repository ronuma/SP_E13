#include <iostream>
#include "tienda.hpp"


using namespace std;

int main(void) {
    int productoSeleccionado, cantidad, continuarInput;
    bool continuar = true;
    bool agregarAlCarrito;

    Tienda tienda = Tienda(Cliente("rodrigo@tec.mx", "Fuente de la calle 3"));
    tienda.mostrarCatalogo();
    vector<Producto> catalogo = tienda.getCatalogo();
    tienda.getCliente().imprimir();

    while(continuar == true) {
        cout << "Ingrese el indice del producto que desea agregar al carrito: ";
        cin >> productoSeleccionado;
        cout << endl;

        cout << "Seleccion: " << endl;
        catalogo[productoSeleccionado].imprimir();

        cout << "Indique la cantidad que desea agregar al carrito ";
        cout << "(" << catalogo[productoSeleccionado].enInventario;
        cout << " en inventario): ";
        cin >> cantidad;
        cout << endl;

        cout << "Desea agregar otro producto al carrito (0) o pagar (1)?: ";
        cin >> continuarInput;
        cout << endl;
        
        //EVALUAR SI LA SELECCION DE USUARIO PERMITE SACAR DEL INVENTARIO

        if(continuarInput == 0) {
            continuar = true;
        } else if (continuarInput == 1) {
            //MOSTRAR EL CARRITO
            //MOSTRAR EL TOTAL A PAGAR Y LA INFORMACION DEL CLIENTE
            continuar = false;
        }
        
    }
}