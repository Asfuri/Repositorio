#include "Circulo.h"
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include <iostream>
using namespace std;
int main() {
  int tipo = 1;
  while (1) {
    cin >> tipo;
    if (tipo > 0) {
      FiguraGeometrica *figura;
      switch (tipo) {
      case 1:
        figura = new Quadrado();
        break;
      case 2:
        figura = new Retangulo();
        break;
      case 3:
        figura = new Triangulo{};
        break;
      case 4:
        figura = new Circulo();
        break;
      default:
        break;
      }
      figura->lerAtributosArea();
      std::cout << figura->getNome() << " de área " << figura->calcularArea() << std::endl;
    } else
      break;
  }
}