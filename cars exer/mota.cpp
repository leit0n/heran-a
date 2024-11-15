#include "mota.h"
#include <iostream>
using namespace std;

// Construtor da classe Mota
Mota::Mota(const string& nomeMota, const string& guidao) : Veiculo(nomeMota), tipoDeGuidao(guidao) {}

// Subrescreve o método mostrarDetalhes para incluir detalhes específicos da mota
void Mota::mostrarDetalhes() const {
    cout << "Mota: " << nome << endl;
    cout << "Tipo de guiador: " << tipoDeGuidao << endl;
}
