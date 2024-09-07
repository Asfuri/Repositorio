#include "FiguraGeometrica.h"
#include <iostream>
#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado : public FiguraGeometrica {
public:
  Quadrado();
  float calcularArea();
  void lerAtributosArea();

private:
  float base;
};
#endif