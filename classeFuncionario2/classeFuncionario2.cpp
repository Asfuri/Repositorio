#include "Funcionario.h"
#include <iostream>
int main() {
  int N;
  std::cin >> N;
  std::string nome, sobrenome;
  float salario;
  Funcionario *funcionario = new Funcionario[N];
  for (int i = 0; i < N; i++) {
    std::cin.ignore();
    getline(std::cin, nome);
    getline(std::cin, sobrenome);
    std::cin >> salario;
    funcionario[i] = Funcionario(salario, nome, sobrenome);
    std::cout << funcionario[i].Funcionario::getNome() << " " << funcionario[i].Funcionario::getSobrenome() << traco << funcionario[i].Funcionario::getSalario() << traco << funcionario[i].Funcionario::getSalarioAnual() << std::endl;
    funcionario[i].Funcionario::aumentaSalario(0.1);
    std::cout << funcionario[i].Funcionario::getSalarioAnual() << std::endl;
  }
}