#include "Professor.h"
#include <iostream>

Professor::Professor() {
}
Professor::Professor(std::string nome, std::string telefone, std::string cpf, int qtdDisciplinas, std::string departamento)
    : Pessoa(nome, telefone, cpf) {
  this->qtdDisciplinas = qtdDisciplinas;
  this->departamento = departamento;
}
void Professor::exibir() {
  Pessoa::exibir();
  std::cout << "Qtd: " << this->qtdDisciplinas << " - " << this->departamento << std::endl;
}