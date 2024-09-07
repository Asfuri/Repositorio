#include "Pessoa.h"
#include <iostream>
#ifndef PROFESSOR_H
#define PROFESSOR_H

class Professor : public Pessoa {
public:
  Professor();
  Professor(std::string nome, std::string telefone, std::string cpf, int qtdDisciplinas, std::string departamento);
  void exibir();

protected:
private:
  int qtdDisciplinas;
  std::string departamento;
};
#endif