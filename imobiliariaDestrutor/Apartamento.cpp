#include "Apartamento.h"
#include <iostream>

Apartamento::Apartamento() {
  this->tipo = 2;
  this->nome = "Apartamento";
}

Apartamento::~Apartamento() {
  std::cout << "Deletando Apartamento" << std::endl;
}

void Apartamento::exibeAtributos() {
  std::cout << "Apartamento para " << disponibilidade << ". " << area << "m2 de área, " << numQuartos << " quartos, " << andar << " andar(es), " << valorCondominio << " de condomínio, " << vagasGaragem << " vaga(s) de garagem. R$ " << valor << "." << std::endl;
}

void Apartamento::lerAtributos() {
  std::cin >> this->valor >> std::ws;
  getline(std::cin, this->disponibilidade);
  std::cin >> this->area >> this->numQuartos >> this->andar >> this->valorCondominio >> this->vagasGaragem;
}