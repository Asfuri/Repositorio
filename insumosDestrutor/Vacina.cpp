#include "Vacina.h"
#include <iostream>

Vacina::Vacina() {
}

Vacina::Vacina(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo)
    : Insumo(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, 1) {
  this->tipo = tipo;
  this->quantDoses = quantDoses;
  this->intervalo = intervalo;
}

Vacina::~Vacina() {
  std::cout << "Deletando Vacina" << std::endl;
}