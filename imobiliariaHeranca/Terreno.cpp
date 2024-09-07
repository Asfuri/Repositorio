#include "Terreno.h"
#include <iostream>

Terreno::Terreno()
    : Imovel(3) {
}
void Terreno::exibeAtributos() {
  std::cout << "Terreno para " << disponivel << ", R$ " << valor << ". " << area << "m2 de área de terreno." << std::endl;
}
void Terreno::lerAtributos() {
  std::cin >> valor;
  std::cin.ignore();
  getline(std::cin, disponivel);
  std::cin >> area;
}