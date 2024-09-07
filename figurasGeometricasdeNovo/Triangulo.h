#include "FiguraGeometrica.h"
#include <iostream>
#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo : public FiguraGeometrica {
public:
  Triangulo();
  float calcularArea();
  void lerAtributosArea();

private:
  float base, altura;
};
#endif