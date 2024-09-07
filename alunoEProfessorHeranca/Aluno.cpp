#include "Aluno.h"
#include <iostream>

Aluno::Aluno() {
}
Aluno::Aluno(std::string nome, std::string telefone, std::string cpf, float CRA, int semestre)
    : Pessoa(nome, telefone, cpf) {
  this->CRA = CRA;
  this->semestre = semestre;
}
void Aluno::exibir() {
  Pessoa::exibir();
  std::cout << "CRA: " << this->CRA << " - Semestre: " << this->semestre << std::endl;
}