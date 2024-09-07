#include "Eleitor.h"
#include <iostream>

Eleitor::Eleitor() {
}

Eleitor::Eleitor(std::string nome, int idade, std::string titulo) {
  this->nome = nome;
  this->idade = idade;
  this->titulo = titulo;
}

std::string Eleitor::getNome() {
  return this->nome;
}

int Eleitor::getIdade() {
  return this->idade;
}

Eleitor::~Eleitor() {
}