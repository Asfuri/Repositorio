#include "ControleDePagamentos.h"
#include <iostream>

ControleDePagamentos::ControleDePagamentos() {
}
void ControleDePagamentos::setPagamento(Pagamento p, int index) {
  pagamentos.push_back(p);
}
Pagamento ControleDePagamentos::getPagamento(int pos) {
  return pagamentos[pos];
}
float ControleDePagamentos::calculaTotalDePagamentos() {
  float sum = 0;
  for (int i = 0; i < pagamentos.size(); i++) {
    sum += pagamentos[i].getPagamento();
  }
  return sum;
}
int ControleDePagamentos::getIndexFuncionario(std::string nomeFuncionario) {
  for (int i = 0; i < pagamentos.size(); i++) {
    if (pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) < pagamentos[i].getNomeDoFuncionario().size() && pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) >= 0) {
      return i;
    }
  }
  return -1;
}