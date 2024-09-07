#include <iostream>
#ifndef ENDERECO_H
#define ENDERECO_H

class Endereco {
public:
  Endereco();
  Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string CEP);
  std::string toString();

private:
  std::string rua, bairro, cidade, estado, CEP, numero;
};

#endif