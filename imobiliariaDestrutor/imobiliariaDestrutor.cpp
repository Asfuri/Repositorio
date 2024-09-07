#include "Imobiliaria.h"
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;
int main() {
  #ifdef _WIN32
  std::setlocale(LC_ALL, "Portuguese_Brazil.1252");
  SetConsoleOutputCP(1252);
  SetConsoleCP(1252);
  #endif
  int N, tipo;
  std::string busca;
  std::cin >> N;
  Imobiliaria imobil;
  Imovel *c = new Casa();
  Imovel *a = new Apartamento();
  Imovel *t = new Terreno();
  for (int i = 0; i < N; i++) {
    std::cin >> tipo;
    switch (tipo) {
    case 1:
      c->lerAtributos();
      imobil.addImovel(c);
      break;
    case 2:
      a->lerAtributos();
      imobil.addImovel(a);
      break;
    case 3:
      t->lerAtributos();
      imobil.addImovel(t);
      break;
    default:
      break;
    }
  }
  std::cin >> std::ws;
  getline(std::cin, busca);
  imobil.buscaImovel(busca);
  // delete imobil;
}