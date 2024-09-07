#include "ContaEspecial.h"
#include <iostream>

ContaEspecial::ContaEspecial() {
}

ContaEspecial::~ContaEspecial() {
}

void ContaEspecial::definirLimite() {
  this->limite = 4 * this->salarioMensal;
}