#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo()
    : FiguraGeometrica(2) {
}
float Retangulo::calcularArea() {
  return base * altura;
}
void Retangulo::lerAtributosArea() {
  std::cin >> base >> altura;
}