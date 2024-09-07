#include "TrabalhadorAssalariado.h"
#include <iostream>

TrabalhadorAssalariado::TrabalhadorAssalariado() {
}
TrabalhadorAssalariado::TrabalhadorAssalariado(float salario) {
  this->salario = salario;
}
float TrabalhadorAssalariado::calcularPagamentoSemanal() {
  return salario * 0.25;
}