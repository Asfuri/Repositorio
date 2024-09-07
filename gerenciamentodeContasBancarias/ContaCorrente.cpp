#include "ContaCorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente() {
}

ContaCorrente::~ContaCorrente() {
}

void ContaCorrente::definirLimite() {
  this->limite = 2 * this->salarioMensal;
}

void ContaCorrente::sacar(float valor) {
  if (this->limite >= valor) {
    saldo -= valor;
  } else {
    std::cout << "\nsaldo insuficiente" << std::endl;
  }
}

double ContaCorrente::saldoTotalDisponivel() {
  return this->limite + saldo;
}

void ContaCorrente::setSalarioMensal(float salarioMensal) {
  this->salarioMensal = salarioMensal;
}

float ContaCorrente::getSalarioMensal() {
  return this->salarioMensal;
}