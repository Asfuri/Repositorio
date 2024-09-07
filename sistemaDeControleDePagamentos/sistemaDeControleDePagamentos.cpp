#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>
using namespace std;
int main() {
  ControleDePagamentos empresa = ControleDePagamentos();
  int N;
  std::cin >> N;
  std::cin.ignore();
  for (int i = 0; i < N; i++) {
    float pagamento;
    std::cin >> pagamento;
    std::cin.ignore();
    std::string nome;
    getline(std::cin, nome);
    Pagamento pag;
    pag.setPagamento(pagamento);
    pag.setNomeDoFuncionario(nome);
    empresa.setPagamento(pag, i);
  }
  std::string pesquisa;
  getline(std::cin, pesquisa);
  int indice = empresa.getIndexFuncionario(pesquisa);
  if (indice != -1) {
    std::cout << empresa.getPagamento(indice).getNomeDoFuncionario() << ": R$ " << empresa.getPagamento(empresa.getIndexFuncionario(pesquisa)).getPagamento() << std::endl;
  } else {
    std::cout << pesquisa << " não encontrado(a)." << std::endl;
  }
  std::cout << "Total: R$ "  << empresa.calculaTotalDePagamentos() << std::endl;
}
