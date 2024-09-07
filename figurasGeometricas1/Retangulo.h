#include "FiguraGeometrica.h"
#include <iostream>
#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo : public FiguraGeometrica {
public:
  Retangulo();
  float calcularArea() override;
  void lerAtributosArea() override;
  std::string getNome() override;

private:
  float base, altura;
};
#endif