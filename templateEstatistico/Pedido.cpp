#include "Pedido.h"
#include <iostream>

Pedido::Pedido() {
}

Pedido::Pedido(float valorUnitario, int quantidade) {
  this->valorUnitario = valorUnitario;
  this->quantidade = quantidade;
}

float Pedido::getTotal() {
  return this->valorUnitario * this->quantidade;
}

void Pedido::print() {
  std::cout << "R$ " << this->valorUnitario << ", quant: " << this->quantidade << ", total: R$ " << this->getTotal() << std::endl;
}

Pedido::~Pedido() {
}