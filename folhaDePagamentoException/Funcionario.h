#include <iostream>
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario {
public:
  Funcionario();
  Funcionario(std::string nome, int matricula);
  virtual ~Funcionario();
  virtual double calcularSalario() = 0;
  std::string getNome();
  int getMatricula();

private:
  int matricula;
  std::string nome;
};
#endif