#include "Pessoa.h"
#include <fstream>
#include <iostream>

Pessoa::Pessoa() {
}

Pessoa::Pessoa(int tipo, std::string nome, std::string telefone, std::string cpf) {
  this->tipo = tipo;
  this->nome = nome;
  this->telefone = telefone;
  this->cpf = cpf;
}

Pessoa::Pessoa(int tipo, std::string nome, std::string telefone) {
  this->tipo = tipo;
  this->nome = nome;
  this->telefone = telefone;
}

Pessoa::~Pessoa() {
}

std::string Pessoa::getNome() {
  return this->nome;
}

std::string Pessoa::getTelefone() {
  return this->telefone;
}

std::string Pessoa::getCPF() {
  return this->cpf;
}

int Pessoa::getTipo() {
  return this->tipo;
}