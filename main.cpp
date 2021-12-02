#include <iostream>
#include "tienda.hpp"


using namespace std;

int main(void) {
    Tienda tienda = Tienda(Cliente("rodrigo@tec.mx", "Fuente de la calle 3"));
    tienda.mostrarCatalogo();
    tienda.getCliente().imprimir();
}