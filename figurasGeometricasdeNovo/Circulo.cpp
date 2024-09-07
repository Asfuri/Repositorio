#include "Circulo.h"
#include <iostream>

Circulo::Circulo()
    : FiguraGeometrica(4) {
}
float Circulo::calcularArea() {
  return 3.14 * raio * raio;
}
void Circulo::lerAtributosArea() {
  std::cin >> raio;
}