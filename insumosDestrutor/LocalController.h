#include "Insumo.h"
#include <iostream>
#include <vector>
#ifndef LOCALCONTROLLER_H
#define LOCALCONTROLLER_H

class LocalController {
public:
  LocalController();
  virtual ~LocalController();
  void addInsumoArr(Insumo *in, int index), addInsumoVec(Insumo *in);

private:
  std::string nome;
  int tipo;
  Insumo *InsumosArr[3];
  std::vector<Insumo *> insumosVec;
};
#endif