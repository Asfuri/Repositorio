#include "TrabalhadorPorHora.h"
#include <iostream>

TrabalhadorPorHora::TrabalhadorPorHora() {
}
TrabalhadorPorHora::TrabalhadorPorHora(float valor) {
  this->valorDaHora = valor;
}
float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais) {
  if (horasSemanais <= 40) {
    this->salario = 4 * horasSemanais * valorDaHora;
    return horasSemanais * valorDaHora;
  } else {
    int aMais = horasSemanais - 40;
    this->salario = 4 * ((40 * valorDaHora) + (aMais * valorDaHora * 1.5));
    return ((40 * valorDaHora) + (aMais * valorDaHora * 1.5));
  }
}
