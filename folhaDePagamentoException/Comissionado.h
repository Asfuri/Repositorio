#include "Funcionario.h"
#include <iostream>
#ifndef COMISSIONADO_H
#define COMISSIONADO_H

class Comissionado : public Funcionario {
public:
  Comissionado();
  Comissionado(std::string nome, int matricula, double vendasMensais, double percentualComissao);
  virtual ~Comissionado();
  double calcularSalario();

private:
  double vendasMensais, percentualComissao;
};
#endif