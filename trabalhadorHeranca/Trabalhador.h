#include <iostream>
#ifndef TRABALHADOR_H
#define TRABALHADOR_H

class Trabalhador {
public:
  Trabalhador();
  float getSalario();
  std::string getNome();
  void setNome(std::string nome), setSalario(float salario);

protected:
  std::string nome;
  float salario;

private:
};
#endif