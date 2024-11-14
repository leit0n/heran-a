#include "carro.h"
#include <iostream>
using namespace std;

// Construtor da classe Carro
Carro::Carro(const string& nomeCarro, int portas) : Veiculo(nomeCarro), numeroDePortas(portas) {}

// Sobrescreve o método mostrarDetalhes para incluir detalhes específicos do carro
void Carro::mostrarDetalhes() const {
    cout << "Carro: " << nome << endl;
    cout << "Número de portas: " << numeroDePortas << endl;
}
