#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"

class Carro : public Veiculo {
private:
    int numeroDePortas;

public:
    Carro(const string& nomeCarro, int portas);
    void mostrarDetalhes() const override;
};

#endif
