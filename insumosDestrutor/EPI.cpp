#include "EPI.h"
#include <iostream>

EPI::EPI() {
}

EPI::EPI(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, std::string tipo, std::string descricao)
    : Insumo(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, 3) {
  this->tipo = tipo;
  this->descricao = descricao;
  this->tipoInsumo = 3;
}

EPI::~EPI() {
  std::cout << "Deletando EPI" << std::endl;
}
