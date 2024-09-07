#include "Casa.h"
#include <iostream>

Casa::Casa() {
  this->tipo = 1;
  this->nome = "Casa";
}

Casa::~Casa() {
  std::cout << "Deletando Casa" << std::endl;
}

void Casa::exibeAtributos() {
  std::cout << "Casa para " << disponibilidade << ". " << numPavimentos << "pavimentos , " << numQuartos << " quartos, " << areaTerreno << "m2 de �rea de terreno e " << areaConstruida << "m2 de �rea constru�da. R$ " << valor << "." << std::endl;
}

void Casa::lerAtributos() {
  std::cin >> this->valor >> std::ws;
  getline(std::cin, this->disponibilidade);
  std::cin >> this->numPavimentos >> this->numQuartos >> this->areaTerreno >> this->areaConstruida;
}