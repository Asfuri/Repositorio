#include "Funcionario.h"
#include <iostream>

Funcionario::Funcionario() {
}

Funcionario::Funcionario(std::string nome, int matricula) {
  this->nome = nome;
  this->matricula = matricula;
}

Funcionario::~Funcionario() {
}

std::string Funcionario::getNome() {
  return this->nome;
}

int Funcionario::getMatricula() {
  return this->matricula;
}