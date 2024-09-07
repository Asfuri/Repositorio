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
      std::cout << "Quadrado de �rea " << q.calcularArea() << std::endl;
      break;
    case 2:
      r.lerAtributosArea();
      std::cout << "Ret�ngulo de �rea " << r.calcularArea() << std::endl;
      break;
    case 3:
      t.lerAtributosArea();
      std::cout << "Tri�ngulo de �rea " << t.calcularArea() << std::endl;
      break;
    case 4:
      c.lerAtributosArea();
      std::cout << "C�rculo de �rea " << c.calcularArea() << std::endl;
      break;
    default:
      break;
    }
  } while (tipo != 0);
}