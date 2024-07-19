#include <iostream>
#ifndef DATA_H
#define DATA_H

class Data {
public:
  Data();
  Data(int dia, int mes, int ano);
  int getDaysMonth(int mes);
  std::string getDia(), getMes(), getAno();
  void setDia(int dia), setMes(int mes), setAno(int ano), avancarDia();

private:
  int dia, mes, ano;
};
#endif