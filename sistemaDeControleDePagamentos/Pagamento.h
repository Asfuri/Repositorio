#include <iostream>
#include <string>
#ifndef PAGAMENTO_H
#define PAGAMENTO_H

class Pagamento {
public:
  Pagamento();
  float getPagamento();
  std::string getNomeDoFuncionario();
  void setPagamento(float valorPagamento);
  void setNomeDoFuncionario(std::string nomeDoFuncionario);

private:
  float valorPagamento;
  std::string nomeDoFuncionario;
};
#endif