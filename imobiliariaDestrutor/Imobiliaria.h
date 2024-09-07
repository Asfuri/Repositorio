#include "Apartamento.h"
#include "Casa.h"
#include "Terreno.h"
#include <iostream>
#include <vector>
#ifndef IMOBILIARIA_H
#define IMOBILIARIA_H

class Imobiliaria {
public:
  Imobiliaria();
  virtual ~Imobiliaria();
  void addImovel(Imovel *im), buscaImovel(std::string busca);
  

private:
  std::vector<Imovel *> imoveis;
};
#endif