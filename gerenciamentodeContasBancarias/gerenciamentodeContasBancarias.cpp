#include "ContaEspecial.h"
#include "Poupanca.h"
#include <iostream>
using namespace std;
int main() {
  ContaCorrente conta1;
  ContaEspecial conta2;
  Poupanca conta3;
  std::string nome;
  int numConta;
  float salarioMensal, depositar, sacar;
  getline(std::cin, nome);
  std::cin >> numConta >> salarioMensal >> depositar >> sacar >> std::ws;
  conta1.setNomeCliente(nome);
  conta1.setNumConta(numConta);
  conta1.setSalarioMensal(salarioMensal);
  conta1.definirLimite();
  conta1.depositar(depositar);
  std::cout << conta1.getNomeCliente() << ", cc: " << conta1.getNumConta() << ", salário " << conta1.getSalarioMensal() << ", ";
  conta1.sacar(sacar);
  std::cout << "saldo total disponível: R$ " << conta1.saldoTotalDisponivel() << std::endl;
  getline(std::cin, nome);
  std::cin >> numConta >> salarioMensal >> depositar >> sacar >> std::ws;
  conta2.setNomeCliente(nome);
  conta2.setNumConta(numConta);
  conta2.setSalarioMensal(salarioMensal);
  conta2.definirLimite();
  conta2.depositar(depositar);
  std::cout << conta2.getNomeCliente() << ", cc: " << conta2.getNumConta() << ", salário " << conta2.getSalarioMensal() << ", ";
  conta2.sacar(sacar);
  std::cout << "saldo total disponível: R$ " << conta2.saldoTotalDisponivel() << std::endl;
  getline(std::cin, nome);
  std::cin >> numConta >> depositar >> sacar;
  conta3.setNomeCliente(nome);
  conta3.setNumConta(numConta);
  conta3.depositar(depositar);
  std::cout << conta3.getNomeCliente() << ", cc: " << conta3.getNumConta();
  conta3.sacar(sacar);
  std::cout << ", saldo total disponível: R$ " << conta3.render() << std::endl;
}