#include "Imovel.h"
#include <iostream>
#ifndef CASA_H
#define CASA_H

class Casa : public Imovel {
public:
  Casa();
  void exibeAtributos();
  void lerAtributos();

private:
  int pavimentos, quartos;
  float areaTerreno, areaConstruida;
};
#endif