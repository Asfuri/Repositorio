#include "Funcionario.h"
#include <iostream>
#ifndef ASSALARIADO_H
#define ASSALARIADO_H

class Assalariado : public Funcionario {
public:
  Assalariado();
  Assalariado(std::string nome, int matricula, double salario);
  virtual ~Assalariado();
  double calcularSalario();

private:
  double salario;
};
#endif