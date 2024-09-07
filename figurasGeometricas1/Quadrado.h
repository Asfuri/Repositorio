#include "FiguraGeometrica.h"
#include <iostream>
#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado : public FiguraGeometrica {
public:
  Quadrado();
  float calcularArea() override;
  void lerAtributosArea() override;
  std::string getNome() override;

private:
  float aresta;
};
#endif