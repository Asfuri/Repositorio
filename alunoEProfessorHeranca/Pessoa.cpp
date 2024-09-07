#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa() {
}
Pessoa::Pessoa(std::string nome, std::string telefone, std::string cpf) {
  this->nome = nome;
  this->telefone = telefone;
  this->cpf = cpf;
}
void Pessoa::exibir() {
  std::cout << this->nome << " - " << this->telefone << " - CPF: " << this->cpf << std::endl;
}