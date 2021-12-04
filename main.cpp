#include <iostream>
#include "tienda.hpp"


using namespace std;

int main(void) {
    int indiceProducto, cantidad, continuarInput;
    bool continuar = true;
    bool agregarAlCarrito;

    Tienda tienda = Tienda(Cliente("rodrigo@tec.mx", "Fuente de la calle 3"));
    vector<Producto> catalogo = tienda.getCatalogo();
    Carrito carrito = tienda.getCarrito();
    tienda.getCliente().imprimir();

    while(continuar == true) {
        tienda.mostrarCatalogo();

        cout << "Ingrese el indice del producto que desea agregar al carrito: ";
        cin >> indiceProducto;
        cout << endl;

        cout << "Seleccion: " << endl;
        catalogo[indiceProducto].imprimir();

        cout << "Indique la cantidad que desea agregar al carrito ";
        cout << "(" << catalogo[indiceProducto].enInventario;
        cout << " en inventario): ";
        cin >> cantidad;
        cout << endl;

        if(cantidad <= catalogo[indiceProducto].enInventario) {
            /*QUISIMOS ACTUALIZAR LA CANTIDAD EN INVENTARIO A PARTIR DE LO QUE AGREGARA
            AL CARRITO, INTENTAMOS VARIAS COSAS PERO NO NOS FUNCIONO. LO BUENO ES QUE ESO
            NO INTERFIRIO CON LOS CONCEPTOS DE POO*/
            for (int i = 0; i < cantidad; i++) {
                carrito.agregarProducto(catalogo[indiceProducto]);
            }
        } else {
            cout << "Hubo un error con la solicitud, intente de nuevo" << endl;
            cout << endl;
        }

        cout << "Desea agregar otro producto al carrito (0) o pagar (1)?: ";
        cin >> continuarInput;
        cout << endl;

        if(continuarInput == 0) {
            continuar = true;
        } else if (continuarInput == 1) {
            //MOSTRAR EL CARRITO
            carrito.impimir();
            //MOSTRAR EL TOTAL A PAGAR Y LA INFORMACION DEL CLIENTE
            carrito.pagar();
            continuar = false;
        }
        
    }
}