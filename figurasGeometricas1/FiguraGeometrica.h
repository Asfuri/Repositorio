#include <iostream>
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica {
public:
  FiguraGeometrica();
  FiguraGeometrica(int tipo);
  virtual float calcularArea() = 0;
  virtual void lerAtributosArea() = 0;
  virtual std::string getNome() = 0;

protected:
  int tipo;

private:
};
#endif