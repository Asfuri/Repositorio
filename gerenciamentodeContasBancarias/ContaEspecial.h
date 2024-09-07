#include "ContaCorrente.h"
#include <iostream>
#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

class ContaEspecial : public ContaCorrente {
public:
  ContaEspecial();
  virtual ~ContaEspecial();
  void definirLimite();

};
#endif