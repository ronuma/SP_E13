#include <iostream>
#include "tienda.hpp"

using namespace std;

int main(void) {
    
    Tienda tiendaPrueba = Tienda();
    tiendaPrueba.generarCatalogo();
    tiendaPrueba.mostrarCatalogo();
}