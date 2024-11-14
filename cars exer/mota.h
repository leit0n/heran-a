#ifndef MOTA_H
#define MOTA_H

#include "veiculo.h"

class Mota : public Veiculo {
private:
    string tipoDeGuidao;

public:
    Mota(const string& nomeMota, const string& guidao);
    void mostrarDetalhes() const override;
};

#endif
