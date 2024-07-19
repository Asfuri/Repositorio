#include "Despesa.h"
#include <iostream>
void Despesa::setNome(std::string nome) {
  this->nome = nome;
}
void Despesa::setValor(float valor) {
  this->valor = valor;
}
void Despesa::setTipoDeGasto(std::string tipoDeGasto) {
  this->tipoDeGasto = tipoDeGasto;
}
std::string Despesa::getNome() {
  return this->nome;
}
float Despesa::getValor() {
  return this->valor;
}
std::string Despesa::getTipoDeGasto() {
  return this->tipoDeGasto;
}
Despesa::Despesa() {
  setValor(0);
}