#include "FiguraGeometrica.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica() {
}
FiguraGeometrica::FiguraGeometrica(int tipo) {
  this->tipo = tipo;
}
float FiguraGeometrica::calcularArea() {
}
std::string FiguraGeometrica::getNome() {
  switch (tipo) {
  case 1:
    return "Quadrado";
    break;
  case 2:
    return "Retângulo";
    break;
  case 3:
    return "Triângulo";
    break;
  case 4:
    return "Círculo";
    break;
  default:
    return "Indefinido";
  }
}
void FiguraGeometrica::lerAtributosArea() {
}