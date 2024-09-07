#include <iostream>
#ifndef PEDIDO_H
#define PEDIDO_H

class Pedido {
public:
  Pedido();
  Pedido(int numero, int quantidade, std::string descricao, float preco);
  float getTotal();
  int getNumero(), getQuantidade();
  std::string getDescricao();
  float getPreco();
  void setQuantidade(int quantidade);

private:
  int numero, quantidade;
  std::string descricao;
  float preco;
};
#endif