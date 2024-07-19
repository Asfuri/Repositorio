#include "Data.h"
#include <iostream>

int Data::getDaysMonth(int mes) {
  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
    break;
  case 2:
    return 28;
    break;
  default:
    return -1;
    break;
  }
}
void Data::setAno(int ano) {
  this->ano = ano;
}
void Data::setMes(int mes) {
  if (mes > 0 && mes <= 12)
    this->mes = mes;
  else {
    std::cout << "Atributo mês Inválido" << std::endl;
    this->mes = 1;
  }
}
void Data::setDia(int dia) {
  if (Data::getDaysMonth(this->mes) >= dia) {
    this->dia = dia;
  } else {
    std::cout << "Atributo dia Inválido" << std::endl;
    dia = 1;
    this->dia = dia;
  }
}
std::string Data::getAno() {
  return std::to_string(this->ano);
}
std::string Data::getMes() {
  if (this->mes > 9)
    return std::to_string(this->mes);
  else
    return "0" + std::to_string(this->mes);
}
std::string Data::getDia() {
  if (this->dia > 9)
    return std::to_string(this->dia);
  else
    return "0" + std::to_string(this->dia);
}
void Data::avancarDia() {
  if (this->dia <= getDaysMonth(this->mes))
    this->dia += 1;
  if (this->dia > getDaysMonth(this->mes)) {
    this->dia = 1;
    this->mes += 1;
  }
  if (this->mes == 13) {
    this->dia = 1;
    this->mes = 1;
    this->ano += 1;
  }
}
Data::Data() {
}
Data::Data(int dia, int mes, int ano) {
  setAno(ano); // Ordem de prioridade!
  setMes(mes);
  setDia(dia);
}