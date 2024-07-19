#include "ControleDeGastos.h"
#include <iostream>

void ControleDeGastos::setDespesa(Despesa d, int pos) {
  despesas[pos] = d;
}
Despesa ControleDeGastos::getDespesa(int pos) {
  return despesas[pos];
}
float ControleDeGastos::calculaTotalDeDespesas() {
  float totalDasDespesas = 0;
  for (int i = 0; i < 100; i++) {
    totalDasDespesas += despesas[i].getValor();
  }
  return totalDasDespesas;
}
bool ControleDeGastos::existeDespesaDoTipo(std::string tipo) {
  for (int i = 0; i < 100; i++) {
    if (despesas[i].getTipoDeGasto() == tipo) {
      return true;
    }
  }
  return false;
}
float ControleDeGastos::calculaTotalDeDespesas(std::string tipo) {
  float totalDasDespesas = 0;
  for (int i = 0; i < 100; i++) {
    if (despesas[i].getTipoDeGasto() == tipo) {
      totalDasDespesas += despesas[i].getValor();
    }
  }
  return totalDasDespesas;
}

void ControleDeGastos::getAchado(Despesa d, std::string tipo) {
  if (ControleDeGastos::existeDespesaDoTipo(tipo)) {
    for (int i = 0; i < 100; i++) {
      if (getDespesa(i).getTipoDeGasto() == tipo) {
        std::cout << getDespesa(i).getNome() << ", R$ " << getDespesa(i).getValor() << std::endl;
      }
    }
  }
}
ControleDeGastos::ControleDeGastos() {
}