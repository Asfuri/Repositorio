#include "Data.h"
#include <iostream>

int main() {
  int dia, mes, ano, acrescimo;
  std::cin >> dia >> mes >> ano;
  Data data(dia, mes, ano); 
  std::cin >> acrescimo;
  for (int i = 0; i < acrescimo; i++) {
    data.avancarDia(); 
  }
  std::cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << std::endl;
}