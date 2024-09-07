#include "Insumo.h"
#include <iostream>
#ifndef EPI_H
#define EPI_H

class EPI : public Insumo {
public:
  EPI();
  EPI(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, std::string tipo, std::string descricao);
  virtual ~EPI();
  std::string tipo, descricao;

private:
};
#endif