#include "EPI.h"
#include "LocalController.h"
#include "Medicamento.h"
#include "Vacina.h"
#include <iostream>
using namespace std;
int main() {
  LocalController controle;
  std::string tipo, nome, dataVencimento, nomeFabricante, dosagem, admininstracao, disponibilizacao, descricao;
  int quantDoses, intervalo, quantidade, valorUnitario;
  getline(std::cin, nome);
  std::cin >> quantidade >> valorUnitario >> std::ws;
  getline(std::cin, dataVencimento);
  getline(std::cin, nomeFabricante);
  getline(std::cin, tipo);
  std::cin >> quantDoses >> intervalo >> std::ws;
  Insumo *vArray = new Vacina(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, tipo, quantDoses, intervalo);
  Insumo *vVector = new Vacina(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, tipo, quantDoses, intervalo);
  getline(std::cin, nome);
  std::cin >> quantidade >> valorUnitario >> std::ws;
  getline(std::cin, dataVencimento);
  getline(std::cin, nomeFabricante);
  getline(std::cin, dosagem);
  getline(std::cin, admininstracao);
  getline(std::cin, disponibilizacao);
  Insumo *mArray = new Medicamento(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, dosagem, admininstracao, disponibilizacao);
  Insumo *mVector = new Medicamento(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, dosagem, admininstracao, disponibilizacao);
  getline(std::cin, nome);
  std::cin >> quantidade >> valorUnitario >> std::ws;
  getline(std::cin, dataVencimento);
  getline(std::cin, nomeFabricante);
  getline(std::cin, tipo);
  getline(std::cin, descricao);
  Insumo *eArray = new EPI(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, tipo, descricao);
  Insumo *eVector = new EPI(nome, quantidade, valorUnitario, dataVencimento, nomeFabricante, tipo, descricao);
  controle.addInsumoArr(vArray, 0);
  controle.addInsumoVec(vVector);
  controle.addInsumoArr(mArray, 1);
  controle.addInsumoVec(mVector);
  controle.addInsumoArr(eArray, 2);
  controle.addInsumoVec(eVector);
}