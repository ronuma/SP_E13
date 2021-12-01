#include <iostream>
#include "tienda.hpp"

using namespace std;

int main(void) {
    
    Tienda prueba = Tienda();
    prueba.generarCatalogo();
    prueba.mostrarCatalogo();
}