#include "FiguraGeometrica.h"
#include <iostream>
#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : public FiguraGeometrica {
public:
  Circulo();
  float calcularArea() override;
  void lerAtributosArea() override;
  std::string getNome() override;

private:
  float raio;
};
#endif