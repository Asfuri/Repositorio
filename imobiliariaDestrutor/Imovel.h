#include <iostream>
#ifndef IMOVEL_H
#define IMOVEL_H

class Imovel {
public:
  Imovel();
  virtual ~Imovel();
  virtual void exibeAtributos() = 0, lerAtributos() = 0;
  std::string getNome(), getDisponibilidade();

protected:
  std::string nome, disponibilidade;
  float valor;
  int tipo;

private:
};
#endif