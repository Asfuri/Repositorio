#include "Imovel.h"
#include <iostream>
#ifndef TERRENO_H
#define TERRENO_H

class Terreno : public Imovel {
public:
  Terreno();
  void exibeAtributos();
  void lerAtributos();

private:
  float area;
};
#endif