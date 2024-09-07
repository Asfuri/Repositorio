#include "Pessoa.h"
#include "Endereco.h"
#include <iostream>

Pessoa::Pessoa() {
}
Pessoa::Pessoa(std::string nome) {
  this->nome = nome;
}
Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone)
    : Pessoa::Pessoa(nome) {
  this->endereco = endereco;
  this->telefone = telefone;
}
void Pessoa::setNome(std::string nome) {
  this->nome = nome;
}
void Pessoa::setTelefone(std::string telefone) {
  this->telefone = telefone;
}
void Pessoa::setEndereco(Endereco endereco) {
  this->endereco = endereco;
}
std::string Pessoa::getNome() {
  return this->nome;
}
std::string Pessoa::getTelefone() {
  return this->telefone;
}
Endereco Pessoa::getEndereco() {
  return this->endereco;
}
std::string Pessoa::toString() {
  return (nome + ", " + telefone + "\n" + endereco.Endereco::toString());
}