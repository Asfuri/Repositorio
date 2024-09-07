#include "Imovel.h"
#include <iostream>
#ifndef TERRENO_H
#define TERRENO_H

class Terreno : public Imovel {
public:
  Terreno();
  virtual ~Terreno();
  void exibeAtributos(), lerAtributos();

private:
  float area;
};
#endif