#include "Livro.h"
#include <iostream>

Livro::Livro() {
}

Livro::Livro(std::string titulo, int totalPaginas) {
  this->titulo = titulo;
  this->totalPaginas = totalPaginas;
}

int Livro::getTotal() {
  return this->totalPaginas;
}

void Livro::print() {
  std::cout << this->titulo << ", páginas: " << this->totalPaginas << std::endl;
}

Livro::~Livro() {
}