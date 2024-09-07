#include "Imovel.h"
#include <iostream>

Imovel::Imovel() {
}

Imovel::~Imovel() {
  std::cout << "Deletando Imovel" << std::endl;
}

std::string Imovel::getNome() {
  return this->nome;
}

std::string Imovel::getDisponibilidade() {
  return this->disponibilidade;
}