#include <iostream>
#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
  Pessoa();
  Pessoa(int tipo, std::string nome, std::string telefone);
  Pessoa(int tipo, std::string nome, std::string telefone, std::string cpf);
  virtual ~Pessoa();
  std::string getNome(), getTelefone(), getCPF();
  int getTipo();

private:
  int tipo;
  std::string nome, telefone, cpf;
};
#endif