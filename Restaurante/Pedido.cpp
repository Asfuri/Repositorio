#include "Pedido.h"
#include <iostream>

Pedido::Pedido() {
}
Pedido::Pedido(int numero, int quantidade, std::string descricao, float preco) {
  this->numero = numero;
  this->quantidade = quantidade;
  this->descricao = descricao;
  this->preco = preco;
}
void Pedido::setQuantidade(int quantidade) {
  this->quantidade = quantidade;
}
int Pedido::getNumero() {
  return this->numero;
}
int Pedido::getQuantidade() {
  return this->quantidade;
}
std::string Pedido::getDescricao() {
  return this->descricao;
}
float Pedido::getPreco() {
  return this->preco;
}
float Pedido::getTotal() {
  return Pedido::getQuantidade() * Pedido::getPreco();
}
