#include "Imovel.h"
#include <iostream>

Imovel::Imovel() {
  tipo = 0;
}
Imovel::Imovel(int tipo) {
  this->tipo = tipo;
}

std::string Imovel::getNome() {
  switch (tipo) {
  case 1:
    return "Casa";
    break;
  case 2:
    return "Apartamento";
    break;
  case 3:
    return "Terreno";
    break;
  default:
    return "Indefinido";
  }
}
void Imovel::exibeAtributos() {
}
void Imovel::lerAtributos() {
}