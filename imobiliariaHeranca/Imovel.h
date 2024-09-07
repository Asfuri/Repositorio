#include <iostream>
#ifndef IMOVEL_H
#define IMOVEL_H

class Imovel {
public:
  Imovel();
  Imovel(int tipo);
  void exibeAtributos();
  void lerAtributos();
  std::string getNome();

protected:
  float valor;
  int tipo;
  std::string disponivel;

private:
};
#endif