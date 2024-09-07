#include <iostream>
#ifndef CONTA_H
#define CONTA_H

class Conta {
public:
  Conta();
  virtual ~Conta();
  virtual void sacar(float valor) = 0;
  void depositar(float valor);
  void setNumConta(int numConta), setNomeCliente(std::string nomeCliente);
  int getNumConta();
  std::string getNomeCliente();

protected:
  std::string nomeCliente;
  int numConta;
  float saldo;
};
#endif