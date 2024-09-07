#include "Imovel.h"
#include <iostream>
#ifndef APARTAMENTO_H
#define APARTAMENTO_H

class Apartamento : public Imovel {
public:
  Apartamento();
  virtual ~Apartamento();
  void exibeAtributos(), lerAtributos();

private:
  float area, valorCondominio;
  int numQuartos, andar, vagasGaragem;
};
#endif