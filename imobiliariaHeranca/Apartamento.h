#include "Imovel.h"
#include <iostream>
#ifndef APARTAMENTO_H
#define APARTAMENTO_H

class Apartamento : public Imovel {
public:
  Apartamento();
  void exibeAtributos();
  void lerAtributos();

private:
  int quartos, andar, garagem;
  float condominio, area;
};
#endif