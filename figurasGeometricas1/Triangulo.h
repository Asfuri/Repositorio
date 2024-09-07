#include "FiguraGeometrica.h"
#include <iostream>
#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo : public FiguraGeometrica {
public:
  Triangulo();
  float calcularArea() override;
  void lerAtributosArea() override;
  std::string getNome() override;

private:
  float base, altura;
};
#endif