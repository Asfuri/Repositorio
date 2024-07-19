#include "Pessoa.h"
#include <iostream>

void Pessoa::setNome(std::string nome) {
  this->nome = nome;
}
void Pessoa::setIdade(int idade) {
  this->idade = idade;
}
void Pessoa::setTelefone(std::string telefone) {
  this->telefone = telefone;
}
Pessoa::Pessoa() {
  setIdade(0);
}
Pessoa::Pessoa(std::string nome) {
}
Pessoa::Pessoa(int idade, std::string telefone) : Pessoa::Pessoa(nome) {
}
int Pessoa::getIdade() {
  return this->idade;
}
std::string Pessoa::getNome() {
  return this->nome;
}
std::string Pessoa::getTelefone() {
  return this->telefone;
}