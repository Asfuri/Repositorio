#include <iostream>
#include "Data.h"
using namespace std;
int main() {
  Data *hoje = new Data();
  int dia, mes, ano;
  cin >> dia >> mes >> ano;
  hoje->setDia(dia);
  hoje->setMes(mes);
  hoje->setAno(ano);
  hoje->printData();
}