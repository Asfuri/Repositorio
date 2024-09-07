#include "Medicamento.h"
#include <iostream>

Medicamento::Medicamento() {
}

Medicamento::Medicamento(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, std::string dosagem, std::string admininstracao, std::string disponibilizacao)
    : Insumo(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, 2) {
  this->dosagem = dosagem;
  this->admininstracao = admininstracao;
  this->disponibilizacao = disponibilizacao;
  this->tipoInsumo = 2;
}

Medicamento::~Medicamento() {
  std::cout << "Deletando Medicamento" << std::endl;
}