#include "Assalariado.h"
#include "Comissionado.h"
#include "Funcionario.h"
#include "Horista.h"
#include <iostream>
#include <vector>
#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
class SistemaGerenciaFolha {
public:
  SistemaGerenciaFolha();
  virtual ~SistemaGerenciaFolha();
  void setFuncionarios(Funcionario *funcionario);
  double calculaValorTotalFolha(), consultaSalarioFuncionario(std::string nome);
  int numFuncionarios();

private:
  std::vector<Funcionario *> funcionarios;
};
#endif