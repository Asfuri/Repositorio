#include "Terreno.h"
#include <iostream>

Terreno::Terreno() {
  this->tipo = 3;
  this->nome = "Terreno";
}

Terreno::~Terreno() {
  std::cout << "Deletando Terreno" << std::endl;
}

void Terreno::exibeAtributos() {
  std::cout << "Terreno para " << disponibilidade << ". " << area << "m2 de área de terreno. R$ " << valor << "." << std::endl;
}
void Terreno::lerAtributos() {
  std::cin >> this->valor >> std::ws;
  getline(std::cin, this->disponibilidade);
  std::cin >> this->area;
}