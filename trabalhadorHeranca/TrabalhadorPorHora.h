#include <iostream>
#include "Trabalhador.h"
#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

class TrabalhadorPorHora : public Trabalhador {
public:
  TrabalhadorPorHora();
  TrabalhadorPorHora(float valor);
  float calcularPagamentoSemanal(int horasSemanais);

protected:
private:
  std::string nome;
  float valorDaHora;
};
#endif