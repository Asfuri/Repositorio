#include <iostream>
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica {
public:
  FiguraGeometrica();
  FiguraGeometrica(int tipo);
  float calcularArea();
  void lerAtributosArea();
  std::string getNome();

protected:
  int tipo;

private:
};
#endif