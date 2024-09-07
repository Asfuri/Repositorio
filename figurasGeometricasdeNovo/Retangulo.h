#include "FiguraGeometrica.h"
#include <iostream>
#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo : public FiguraGeometrica {
public:
  Retangulo();
  float calcularArea();
  void lerAtributosArea();

private:
  float base, altura;
};
#endif