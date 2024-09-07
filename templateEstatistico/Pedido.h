#include <iostream>
#ifndef PEDIDO_H
#define PEDIDO_H

class Pedido {
public:
  Pedido();
  Pedido(float valorUnitario, int quantidade);
  float getTotal();
  void print();
  virtual ~Pedido();

private:
  float valorUnitario;
  int quantidade;
};
#endif