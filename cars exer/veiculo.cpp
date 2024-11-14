#include "veiculo.h"
#include <iostream>
using namespace std;

// Construtor da classe base Veiculo
Veiculo::Veiculo(const string& nomeVeiculo) : nome(nomeVeiculo) {}

// Método para mostrar detalhes do Veiculo
void Veiculo::mostrarDetalhes() const {
    cout << "Nome do veículo: " << nome << endl;
}

// Destrutor virtual
Veiculo::~Veiculo() {}
