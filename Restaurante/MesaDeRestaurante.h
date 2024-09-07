#include "Pedido.h"
#include <iostream>
#include <vector>
#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

class MesaDeRestaurante {
public:
  MesaDeRestaurante();
  void AdicionarPedido(Pedido p);
  void zeraPedidos();
  void exibeConta();
  float calculaTotal();

private:
  std::vector<Pedido> pedidosDaMesa;
  int numeroDaMesa;
};
#endif