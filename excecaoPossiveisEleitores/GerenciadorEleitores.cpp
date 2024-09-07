#include "GerenciadorEleitores.h"
#include <iostream>

GerenciadorEleitores::GerenciadorEleitores() {
}

void GerenciadorEleitores::cadastrarEleitor(std::string nome, int idade, std::string titulo) {
  Eleitor *a = new Eleitor(nome, idade, titulo);
  listaDeEleitores.push_back(a);
}

void GerenciadorEleitores::verificaEleitores() {
  for (auto el : listaDeEleitores) {
    try {
      verificaPendenciaIdade(el);
      verificaMenoridade(el);
    } catch (std::overflow_error erroPendencia) {
      std::cout << erroPendencia.what() << std::endl;
    } catch (std::underflow_error erroMenor) {
      std::cout << erroMenor.what() << std::endl;
    }
  }
}

void GerenciadorEleitores::verificaPendenciaIdade(Eleitor *el) {
  if (el->getIdade() > 20) {
    throw std::overflow_error("Eleitor " + el->getNome() + " com pendência");
  }
}

void GerenciadorEleitores::verificaMenoridade(Eleitor *el) {
  if (el->getIdade() < 16) {
    throw std::underflow_error("Eleitor " + el->getNome() + " não pode ser cadastrado");
  }
}

GerenciadorEleitores::~GerenciadorEleitores() {
  for (auto el : listaDeEleitores) {
    delete el;
  }
}