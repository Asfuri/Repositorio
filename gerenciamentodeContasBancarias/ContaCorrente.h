#include "Conta.h"
#include <iostream>
#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente : public Conta {
public:
  ContaCorrente();
  virtual ~ContaCorrente();
  void definirLimite();
  void sacar(float valor);
  double saldoTotalDisponivel();
  void setSalarioMensal(float salarioMensal);
  float getSalarioMensal();

protected:
  float salarioMensal;
  float limite;
};
#endif