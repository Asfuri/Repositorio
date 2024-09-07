#include "OrcamentoEstouradoException.h"
#include <iostream>

OrcamentoEstouradoException::OrcamentoEstouradoException()
    : mensagem("OrcamentoEstouradoException") {
}

OrcamentoEstouradoException::~OrcamentoEstouradoException() {
}

const char *OrcamentoEstouradoException::what() const throw() {
  return this->mensagem.c_str();
}