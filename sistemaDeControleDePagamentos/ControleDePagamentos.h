#include "Pagamento.h"
#include <iostream>
#include <vector>
#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

class ControleDePagamentos {
public:
  ControleDePagamentos();
  void setPagamento(Pagamento p, int index);
  Pagamento getPagamento(int pos);
  float calculaTotalDePagamentos();
  int getIndexFuncionario(std::string nomeFuncionario);
private:
  std::vector<Pagamento> pagamentos;
};
#endif