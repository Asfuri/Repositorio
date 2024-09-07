#include "Comissionado.h"
#include <iostream>

Comissionado::Comissionado() {
}

Comissionado::Comissionado(std::string nome, int matricula, double vendasMensais, double percentualComissao)
    : Funcionario(nome, matricula) {
  this->vendasMensais = vendasMensais;
  this->percentualComissao = percentualComissao;
}

Comissionado::~Comissionado() {
}

double Comissionado::calcularSalario() {
  return this->vendasMensais * this->percentualComissao;
}