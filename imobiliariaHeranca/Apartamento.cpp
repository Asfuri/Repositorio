#include "Apartamento.h"
#include <iostream>

Apartamento::Apartamento()
    : Imovel(2) {
}
void Apartamento::exibeAtributos() {
  std::cout << "Apartamento para " << disponivel << ", R$ " << valor << ". " << area << "m2 de área, " << quartos << " quartos, " << andar << " andar(es), " << condominio << " de condomínio, " << garagem << " vaga(s) de garagem." << std::endl;
}
void Apartamento::lerAtributos() {
  std::cin >> valor;
  std::cin.ignore();
  getline(std::cin, disponivel);
  std::cin >> area >> quartos >> andar >> condominio >> garagem;
}