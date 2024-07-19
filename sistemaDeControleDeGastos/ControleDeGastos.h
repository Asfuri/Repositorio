#include "Despesa.h"
#include <iostream>
#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

class ControleDeGastos {
public:
  ControleDeGastos();
  void setDespesa(Despesa d, int pos);
  Despesa getDespesa(int pos);
  float calculaTotalDeDespesas(), calculaTotalDeDespesas(std::string tipo);
  bool existeDespesaDoTipo(std::string tipo);
  void getAchado(Despesa d, std::string tipo);

private:
  Despesa *despesas = new Despesa[100];
};
#endif