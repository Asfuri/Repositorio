#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include <iostream>
using namespace std;
int main() {
  Triangulo t;
  Circulo c;
  Quadrado q;
  Retangulo r;
  int tipo;
  do {
    std::cin >> tipo;
    switch (tipo) {
    case 1:
      q.lerAtributosArea();
      std::cout << "Quadrado de área " << q.calcularArea() << std::endl;
      break;
    case 2:
      r.lerAtributosArea();
      std::cout << "Retângulo de área " << r.calcularArea() << std::endl;
      break;
    case 3:
      t.lerAtributosArea();
      std::cout << "Triângulo de área " << t.calcularArea() << std::endl;
      break;
    case 4:
      c.lerAtributosArea();
      std::cout << "Círculo de área " << c.calcularArea() << std::endl;
      break;
    default:
      break;
    }
  } while (tipo != 0);
}