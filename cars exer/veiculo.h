#ifndef veiculo_H
#define veiculo_H

#include <string>
using namespace std;

class Veiculo {
protected:
    string nome;

public:
    Veiculo(const string& nomeVeiculo);
    virtual void mostrarDetalhes() const;
    virtual ~Veiculo();
};

#endif