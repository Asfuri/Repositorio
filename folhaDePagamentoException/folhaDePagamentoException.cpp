#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include "SistemaGerenciaFolha.h"
#include <iostream>
using namespace std;
int main() {
  double orcamentoMaximo;
  std::string nome;
  int matricula;
  double salario, vendas, percentualComissao, horasTrabalhadas;
  std::cin >> orcamentoMaximo;
  std::cin.ignore();
  SistemaGerenciaFolha sistema = SistemaGerenciaFolha();
  Funcionario *a, *h, *c;
  getline(std::cin, nome);
  std::cin >> matricula >> salario;
  std::cin.ignore();
  a = new Assalariado(nome, matricula, salario);
  sistema.setFuncionarios(a);
  getline(std::cin, nome);
  std::cin >> matricula >> salario >> horasTrabalhadas;
  std::cin.ignore();
  h = new Horista(nome, matricula, salario, horasTrabalhadas);
  sistema.setFuncionarios(h);
  getline(std::cin, nome);
  std::cin >> matricula >> vendas >> percentualComissao;
  std::cin.ignore();
  c = new Comissionado(nome, matricula, vendas, percentualComissao);
  sistema.setFuncionarios(c);

  for (int i = 0; i < sistema.numFuncionarios(); i++) {
    getline(std::cin, nome);
    try {
      if (sistema.consultaSalarioFuncionario(nome) != -1) {
        std::cout << sistema.consultaSalarioFuncionario(nome) << std::endl;
      } else {
        throw FuncionarioNaoExisteException();
      }
    } catch (FuncionarioNaoExisteException naoExiste) {
      std::cout << naoExiste.what() << " " << nome << std::endl;
    }
  }

  try {
    if (sistema.calculaValorTotalFolha() > orcamentoMaximo) {
      throw OrcamentoEstouradoException();
    } else
      std::cout << sistema.calculaValorTotalFolha() << std::endl;
  } catch (OrcamentoEstouradoException orcamentoErro) {
    std::cout << orcamentoErro.what() << " " << sistema.calculaValorTotalFolha() << std::endl;
  }
}