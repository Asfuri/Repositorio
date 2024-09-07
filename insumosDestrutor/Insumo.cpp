#include "Insumo.h"
#include <iostream>

Insumo::Insumo() {
}

Insumo::Insumo(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, int tipoInsumo) {
  this->nome = nome;
  this->quantidade = quantidade;
  this->dataVencimento = dataVencimento;
  this->nomeFabricante = nomeFabricante;
  this->tipoInsumo = tipoInsumo;
}

Insumo::~Insumo() {
  std::cout << "Deletando Insumos" << std::endl;
}