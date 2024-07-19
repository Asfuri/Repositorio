#include "Invoice.h"
#include <iostream>
#define traco " - "
void Invoice::setNumero(int numero) {
  this->numero = numero;
}

void Invoice::setDescricao(std::string descricao) {
  this->descricao = descricao;
}

void Invoice::setQuantidade(int quantidade) {
  if (quantidade > 0)
    this->quantidade = quantidade;
  else
    this->quantidade = 0;
}

void Invoice::setPreco(float preco) {
  if (preco > 0)
    this->preco = preco;
  else
    this->preco = 0;
}
int Invoice::getNumero() {
  return this->numero;
}
std::string Invoice::getDescricao() {
  return this->descricao;
}
int Invoice::getQuantidade() {
  return this->quantidade;
}
float Invoice::getPreco() {
  return this->preco;
}
Invoice::Invoice(int numero, std::string descricao, int quantidade, float preco) {
  this->setNumero(numero);
  this->setDescricao(descricao);
  this->setQuantidade(quantidade);
  this->setPreco(preco);
}
float Invoice::getInvoiceAmount() {
  return this->getQuantidade() * this->getPreco();
}
void Invoice::print() {
  std::cout << this->getNumero() << traco << this->getDescricao() << traco << this->getQuantidade() << traco << this->getPreco() << traco << this->getInvoiceAmount() << std::endl;
}