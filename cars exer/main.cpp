#include "carro.h"
#include "mota.h"
#include <iostream>

using namespace std;

int main() {
    Carro carro("Toyota", 4);
    carro.mostrarDetalhes();
    
    Mota mota("Yamaha", "Desportivo");
    mota.mostrarDetalhes();
    
    return 0;
}
