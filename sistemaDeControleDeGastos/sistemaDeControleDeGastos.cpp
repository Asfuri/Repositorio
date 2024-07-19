#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
int main() {
  int N;
  std::cin >> N;
  Despesa *despesas = new Despesa[N];
  ControleDeGastos controle;
  std::cin.ignore();
  std::string nome, tipoDeGasto, pesquisa;
  float valor;
  for (int i = 0; i < N; i++) {
    getline(std::cin, nome);
    std::cin >> valor;
    std::cin.ignore();
    getline(std::cin, tipoDeGasto);
    despesas[i].setNome(nome);
    despesas[i].setValor(valor);
    despesas[i].setTipoDeGasto(tipoDeGasto);
    controle.ControleDeGastos::setDespesa(despesas[i], i);
  }
  getline(std::cin, pesquisa);
  controle.ControleDeGastos::calculaTotalDeDespesas(pesquisa);
  controle.ControleDeGastos::getAchado(*despesas, pesquisa);
  if (!controle.ControleDeGastos::existeDespesaDoTipo(pesquisa)) {
    std::cout << "Nenhuma despesa do tipo especificado" << std::endl;
  }
  std::cout << "Total: " << controle.ControleDeGastos::calculaTotalDeDespesas(pesquisa) << "/" << controle.ControleDeGastos::calculaTotalDeDespesas() << std::endl;
}