#include "Insumo.h"
#include <iostream>
#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

class Medicamento : public Insumo {
public:
  Medicamento();
  Medicamento(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, std::string dosagem, std::string admininstracao, std::string disponibilizacao);
  virtual ~Medicamento();
  std::string dosagem, admininstracao, disponibilizacao;

private:
};
#endif