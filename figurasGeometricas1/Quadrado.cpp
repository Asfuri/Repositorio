#include "Quadrado.h"
#include <iostream>

Quadrado::Quadrado()
    : FiguraGeometrica(1) {
}
void Quadrado::lerAtributosArea() {
  std::cin >> aresta;
}
float Quadrado::calcularArea() {
  return aresta * aresta;
}
std::string Quadrado::getNome() {
  return "Quadrado";
}
