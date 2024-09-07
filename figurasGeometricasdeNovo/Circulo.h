#include "FiguraGeometrica.h"
#include <iostream>
#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : public FiguraGeometrica {
public:
  Circulo();
  float calcularArea();
  void lerAtributosArea();

private:
  float raio;
};
#endif