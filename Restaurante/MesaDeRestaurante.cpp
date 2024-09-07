#include "MesaDeRestaurante.h"
#include <iostream>

MesaDeRestaurante::MesaDeRestaurante() {
}

void MesaDeRestaurante::AdicionarPedido(Pedido p) {
  int q = 0;
  for (auto &pedido : pedidosDaMesa) {
    if (pedido.getDescricao() == p.getDescricao()) {
      q = p.getQuantidade() + pedido.getQuantidade();
      pedido = Pedido(pedido.getNumero(), q, pedido.getDescricao(), pedido.getPreco());
      return;
    }
  }
  pedidosDaMesa.push_back(p);
}
void MesaDeRestaurante::zeraPedidos() {
  pedidosDaMesa.clear();
}
float MesaDeRestaurante::calculaTotal() {
  float sum = 0;
  for (auto pedido : pedidosDaMesa) {
    sum += pedido.getTotal();
  }
  return sum;
}
void MesaDeRestaurante::exibeConta() {
  for (auto pedido : pedidosDaMesa) {
    std::cout << pedido.getNumero() << " - " << pedido.getDescricao() << " - " << pedido.getQuantidade() << " - " << pedido.getPreco() << " - R$ " << pedido.getTotal() << std::endl;
  }
}
