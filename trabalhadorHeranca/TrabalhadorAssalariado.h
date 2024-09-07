#include "Trabalhador.h"
#include <iostream>
#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

class TrabalhadorAssalariado : public Trabalhador {
public:
  TrabalhadorAssalariado();
  TrabalhadorAssalariado(float salario);
  float calcularPagamentoSemanal();

protected:
private:
  std::string nome;
};

#endif