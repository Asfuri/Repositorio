#include "Eleitor.h"
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
#ifndef GERENCIADORELEITORES_H
#define GERENCIADORELEITORES_H

class GerenciadorEleitores {
public:
  GerenciadorEleitores();
  virtual ~GerenciadorEleitores();
  void cadastrarEleitor(std::string nome, int idade, std::string titulo), verificaEleitores();
  std::vector<Eleitor *> listaDeEleitores;

private:
  void verificaPendenciaIdade(Eleitor *el), verificaMenoridade(Eleitor *el);
};
#endif