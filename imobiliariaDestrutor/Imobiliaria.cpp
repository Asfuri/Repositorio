#include "Imobiliaria.h"
#include <iostream>

Imobiliaria::Imobiliaria() {
}

Imobiliaria::~Imobiliaria() {
  std::cout << "Deletando Imobiliária" << std::endl;
  for (auto i : imoveis) {
    delete i;
  }
}

void Imobiliaria::addImovel(Imovel *im) {
  imoveis.push_back(im);
}

void Imobiliaria::buscaImovel(std::string busca) {
  for (auto imo : imoveis) {
    bool encontrado = false;
    if ((imo->getDisponibilidade()).find(busca) != std::string::npos) {
      encontrado = true;
    }
    if ((imo->getNome()).find(busca) != std::string::npos) {
      encontrado = true;
    }
    if (encontrado) {
      imo->exibeAtributos();
    }
  }
}