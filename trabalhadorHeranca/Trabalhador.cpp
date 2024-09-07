#include "Trabalhador.h"
#include <iostream>

Trabalhador::Trabalhador() {
  salario = 0;
}
std::string Trabalhador::getNome() {
  return nome;
}
float Trabalhador::getSalario() {
  return salario;
}
void Trabalhador::setNome(std::string nome) {
  this->nome = nome;
}