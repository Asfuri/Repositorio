#include "Conta.h"
#include <iostream>

Conta::Conta() {
}
Conta::~Conta() {
}
void Conta::depositar(float valor) {
  saldo += valor;
}

void Conta::setNumConta(int numConta) {
  this->numConta = numConta;
}

int Conta::getNumConta() {
  return this->numConta;
}

void Conta::setNomeCliente(std::string nomeCliente) {
  this->nomeCliente = nomeCliente;
}

std::string Conta::getNomeCliente() {
  return this->nomeCliente;
}