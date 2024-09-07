#include "Assalariado.h"
#include <iostream>

Assalariado::Assalariado() {
}

Assalariado::~Assalariado() {
}

Assalariado::Assalariado(std::string nome, int matricula, double salario)
    : Funcionario(nome, matricula) {
  this->salario = salario;
}

double Assalariado::calcularSalario() {
  return this->salario;
}