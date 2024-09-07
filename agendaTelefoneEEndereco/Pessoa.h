#include <iostream>
#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
  Pessoa();
  Pessoa(std::string nome);
  Pessoa(std::string nome, Endereco endereco, std::string telefone);
  std::string getNome(), getTelefone();
  Endereco getEndereco();
  void setNome(std::string nome), setEndereco(Endereco endereco), setTelefone(std::string telefone);
  std::string toString();

private:
  std::string nome, telefone;
  Endereco endereco;
};

#endif