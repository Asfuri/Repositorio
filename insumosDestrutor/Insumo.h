#include <iostream>
#ifndef INSUMO_H
#define INSUMO_H

class Insumo {
public:
  Insumo();
  Insumo(std::string nome, int quantidade, int valorUnitario, std::string dataVencimento, std::string nomeFabricante, int tipoInsumo);
  virtual ~Insumo();

protected:
  std::string nome, dataVencimento, nomeFabricante;
  int quantidade, valorUnitario, tipoInsumo;

private:
};
#endif