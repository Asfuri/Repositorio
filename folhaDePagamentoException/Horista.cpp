#include "Horista.h"
#include <iostream>

Horista::Horista() {
}

Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
    : Funcionario(nome, matricula) {
  this->salarioPorHora = salarioPorHora;
  this->horasTrabalhadas = horasTrabalhadas;
}

Horista::~Horista() {
}

double Horista::calcularSalario() {
  if (horasTrabalhadas <= 40) {
    return 4 * horasTrabalhadas * salarioPorHora;
  } else {
    int aMais = horasTrabalhadas - 40;
    return 4 * ((40 * salarioPorHora) + (aMais * salarioPorHora * 1.5));
  }
}