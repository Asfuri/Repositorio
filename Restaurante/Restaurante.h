#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>
#include <vector>
#ifndef RESTAURANTE_H
#define RESTAURANTE_H

class Restaurante {
public:
  Restaurante();
  Restaurante(int numMesas);
  std::vector<MesaDeRestaurante> todasAsMesas;
  void adicionarPedido(Pedido p, int indMesa);
  float calculaTotalRestaurante();
  MesaDeRestaurante getMesa(int indMesa);

private:
};
#endif