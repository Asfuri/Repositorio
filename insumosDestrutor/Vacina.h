#include "Insumo.h"
#include <iostream>
#ifndef VACINA_H
#define VACINA_H

class Vacina : public Insumo {
public:
  Vacina();
  Vacina(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo);
  virtual ~Vacina();

private:
  std::string tipo;
  int quantDoses, intervalo;
};
#endif