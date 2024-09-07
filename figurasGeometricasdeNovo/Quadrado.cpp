#include "Quadrado.h"
#include <iostream>

Quadrado::Quadrado()
    : FiguraGeometrica(1) {
}
float Quadrado::calcularArea() {
  return base * base;
}
void Quadrado::lerAtributosArea() {
  std::cin >> base;
}