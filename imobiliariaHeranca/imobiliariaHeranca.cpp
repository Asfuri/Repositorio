#include "Apartamento.h"
#include "Casa.h"
#include "Imovel.h"
#include "Terreno.h"
#include <iostream>
using namespace std;
int main() {
  Terreno t;
  Casa c;
  Apartamento a;
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int tipo;
    cin >> tipo;
    switch (tipo) {
    case 1:
      c.lerAtributos();
      c.exibeAtributos();
      break;
    case 2:
      a.lerAtributos();
      a.exibeAtributos();
      break;
    case 3:
      t.lerAtributos();
      t.exibeAtributos();
      break;
    default:
      break;
    }
  }
}