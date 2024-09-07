#include "FuncionarioNaoExisteException.h"
#include <iostream>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
    : mensagem("FuncionarioNaoExisteException") {
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException() {
}

const char *FuncionarioNaoExisteException::what() const throw() {
  return this->mensagem.c_str();
}