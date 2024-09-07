#include "SistemaGerenciaFolha.h"
#include <iostream>

SistemaGerenciaFolha::SistemaGerenciaFolha() {
}

SistemaGerenciaFolha::~SistemaGerenciaFolha() {
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario) {
  funcionarios.push_back(funcionario);
}

int SistemaGerenciaFolha::numFuncionarios() {
  return this->funcionarios.size();
}

double SistemaGerenciaFolha::calculaValorTotalFolha() {
  double salarioTotal = 0;
  for (auto f : funcionarios) {
    salarioTotal += f->calcularSalario();
  }
  return salarioTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome) {
  for (int i = 0; i < funcionarios.size(); i++) {
    if ((funcionarios[i]->getNome()).find(nome) != std::string::npos) {
      return funcionarios[i]->calcularSalario();
    }
  }
  return -1;
}