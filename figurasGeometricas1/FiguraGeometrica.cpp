#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica() {
}
FiguraGeometrica::FiguraGeometrica(int tipo) {
  this->tipo = tipo;
}

// float FiguraGeometrica::calcularArea() {
//   switch (tipo) {
//   case 1: {
//     Quadrado quadrado;
//     quadrado.lerAtributosArea();
//     return quadrado.calcularArea();
//     break;
//   }
//   case 2: {
//     Retangulo retangulo;
//     retangulo.lerAtributosArea();
//     return retangulo.calcularArea();
//     break;
//   }
//   case 3: {
//     Triangulo triangulo;
//     triangulo.lerAtributosArea();
//     return triangulo.calcularArea();
//     break;
//   }
//   case 4: {
//     Circulo circulo;
//     circulo.lerAtributosArea();
//     return circulo.calcularArea();
//     break;
//   }
//   default:
//     return 0.0;
//   }
// }
// void FiguraGeometrica::lerAtributosArea() {
//   switch (tipo) {
//   case 1: {
//     Quadrado quadrado;
//     quadrado.lerAtributosArea();
//     break;
//   }
//   case 2: {
//     Retangulo retangulo;
//     retangulo.lerAtributosArea();
//     break;
//   }
//   case 3: {
//     Triangulo triangulo;
//     triangulo.lerAtributosArea();
//     break;
//   }
//   case 4: {
//     Circulo circulo;
//     circulo.lerAtributosArea();
//     break;
//   }
//   default:
//     break;
//   }
// }
// std::string FiguraGeometrica::getNome() {
//   switch (tipo) {
//   case 1: {
//     Quadrado quadrado;
//     return quadrado.getNome();
//     break;
//   }
//   case 2: {
//     Retangulo retangulo;
//     return retangulo.getNome();
//     break;
//   }
//   case 3: {
//     Triangulo triangulo;
//     return triangulo.getNome();
//     break;
//   }
//   case 4: {
//     Circulo circulo;
//     return circulo.getNome();
//     break;
//   }
//   default:
//     return "";
//   }
// }