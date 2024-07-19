#include <iostream>
#ifndef DESPESA_H
#define DESPESA_H

class Despesa {
public:
  Despesa();
  void setNome(std::string), setValor(float), setTipoDeGasto(std::string);
  std::string getNome(), getTipoDeGasto();
  float getValor();

private:
  std::string nome, tipoDeGasto;
  float valor;
};
#endif