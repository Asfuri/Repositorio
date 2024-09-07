#include <iostream>
#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
  Pessoa();
  Pessoa(std::string nome, std::string telefone, std::string cpf);
  void exibir();

protected:
  std::string nome, telefone, cpf;

private:
};
#endif