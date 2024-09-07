#include "Imovel.h"
#include <iostream>
#ifndef CASA_H
#define CASA_H

class Casa : public Imovel {
public:
  Casa();
  virtual ~Casa();
  void exibeAtributos(), lerAtributos();

private:
  int numPavimentos, numQuartos;
  float areaTerreno, areaConstruida;
};
#endif