#include "Funcionario.h"
#include <iostream>
#ifndef HORISTA_H
#define HORISTA_H

class Horista : public Funcionario {
public:
  Horista();
  Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
  virtual ~Horista();
  double calcularSalario();

private:
  double salarioPorHora, horasTrabalhadas;
};
#endif