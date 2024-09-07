#include "Casa.h"
#include <iostream>

Casa::Casa()
    : Imovel(1) {
}
void Casa::exibeAtributos() {
  std::cout << "Casa para " << disponivel << ", R$ " << valor << ". " << pavimentos << " pavimentos, " << quartos << " quartos, " << areaTerreno << "m2 de �rea de terreno e " << areaConstruida << "m2 de �rea constru�da." << std::endl;
}
void Casa::lerAtributos() {
  std::cin >> valor;
  std::cin.ignore();
  getline(std::cin, disponivel);
  std::cin >> pavimentos >> quartos >> areaTerreno >> areaConstruida;
}