#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo()
    : FiguraGeometrica(2) {
}

void Retangulo::lerAtributosArea() {
  std::cin >> base >> altura;
}
float Retangulo::calcularArea() {
  return base * altura;
}
std::string Retangulo::getNome() {
  return "Retângulo";
}