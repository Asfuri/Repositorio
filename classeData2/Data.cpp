#include "Data.h"
#include <iostream>
using namespace std;
Data::Data() {
  this->dia = 1;
  this->mes = 1;
  this->ano = 1;
}
void Data::setDia(int dia) {
  this->dia = dia;
}
void Data::setMes(int mes) {
  this->mes = mes;
}
void Data::setAno(int ano) {
  this->ano = ano;
}
int Data::getDia() {
  return this->dia;
}
string Data::getMes() {
  switch (this->mes) {
  case 1:
    return "Janeiro";
    break;
  case 2:
    return "Fevereiro";
    break;
  case 3:
    return "Março";
    break;
  case 4:
    return "Abril";
    break;
  case 5:
    return "Maio";
    break;
  case 6:
    return "Junho";
    break;
  case 7:
    return "Julho";
    break;
  case 8:
    return "Agosto";
    break;
  case 9:
    return "Setemebro";
    break;
  case 10:
    return "Outubro";
    break;
  case 11:
    return "Novembro";
    break;
  case 12:
    return "Dezembro";
    break;
  default:
    return "Indefinido";
    break;
  }
}
int Data::getAno() {
  return this->ano;
}
void Data::printData() {
  cout << this->getDia() << " de " << this->getMes() << " de " << this->getAno() << endl;
}