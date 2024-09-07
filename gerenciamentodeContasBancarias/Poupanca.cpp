#include "Poupanca.h"
#include <iostream>

Poupanca::Poupanca() {
}

Poupanca::~Poupanca() {
}

float Poupanca::render() {
  float variacao = 51;
  if (variacao == 51) {
    taxaRendimento = 1.006;
  } else if (variacao == 1) {
    taxaRendimento = 1.011;
  }
  this->saldo *= this->taxaRendimento;
  return this->saldo;
}

void Poupanca::sacar(float valor) {
  if (this->saldo >= valor) {
    this->saldo -= valor;
  } else {
    std::cout << "\nsaldo insuficiente" << std::endl;
  }
}
