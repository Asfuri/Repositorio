#include "Circulo.h"
#include "FiguraGeometrica.h"
#include <iostream>

Circulo::Circulo()
    : FiguraGeometrica(4) {
}
void Circulo::lerAtributosArea() {
  std::cin >> raio;
}
float Circulo::calcularArea() {
  return raio * raio * 3.14;
}
std::string Circulo::getNome() {
  return "Círculo";
}