#include "Conta.h"
#include <iostream>
#ifndef POUPANCA_H
#define POUPANCA_H

class Poupanca : public Conta {
public:
  Poupanca();
  virtual ~Poupanca();
  float render();
  void sacar(float valor);

private:
  int variacao;
  float taxaRendimento;
};
#endif