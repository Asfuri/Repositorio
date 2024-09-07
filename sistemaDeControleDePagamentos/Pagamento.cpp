#include "Pagamento.h"
#include <iostream>

Pagamento::Pagamento() {
  valorPagamento = 0;
}
float Pagamento::getPagamento() {
  return valorPagamento;
}
std::string Pagamento::getNomeDoFuncionario() {
  return nomeDoFuncionario;
}
void Pagamento::setPagamento(float valorPagamento){
  this->valorPagamento = valorPagamento;
}
void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
  this->nomeDoFuncionario = nomeDoFuncionario;
}
