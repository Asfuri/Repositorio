#include "Restaurante.h"
#include <iostream>

Restaurante::Restaurante() {
}
Restaurante::Restaurante(int numMesas) {
  todasAsMesas = std::vector<MesaDeRestaurante>(numMesas);
}
void Restaurante::adicionarPedido(Pedido p, int indMesa) {
  if (indMesa >= 0 && indMesa < todasAsMesas.size()) {
    todasAsMesas[indMesa].AdicionarPedido(p);
  }
}
float Restaurante::calculaTotalRestaurante() {
  float lucroTotal = 0;
  for (auto mesas : todasAsMesas) {
    lucroTotal += mesas.calculaTotal();
  }
  return lucroTotal;
}
MesaDeRestaurante Restaurante::getMesa(int indMesa) {
  if (indMesa >= 0 && indMesa < todasAsMesas.size()) {
    return todasAsMesas[indMesa];
  }
  return MesaDeRestaurante();
}
