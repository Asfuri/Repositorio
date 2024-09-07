#include "Pessoa.h"
#include <iostream>
#ifndef ALUNO_H
#define ALUNO_H

class Aluno : public Pessoa {
public:
  Aluno();
  Aluno(std::string nome, std::string telefone, std::string cpf, float CRA, int semestre);
  void exibir();
protected:
private:
  float CRA;
  int semestre;
};
#endif