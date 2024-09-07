#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo()
    : FiguraGeometrica(3) {
}
void Triangulo::lerAtributosArea() {
  std::cin >> base >> altura;
}
float Triangulo::calcularArea() {
  return base * 0.5 * altura;
}
std::string Triangulo::getNome() {
  return "Triângulo";
}