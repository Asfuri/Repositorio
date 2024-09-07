#include <iostream>
#ifndef ELEITOR_H
#define ELEITOR_H

class Eleitor {
public:
  Eleitor();
  Eleitor(std::string nome, int idade, std::string titulo);
  virtual ~Eleitor();
  std::string getNome();
  int getIdade();

private:
  std::string nome, titulo;
  int idade;
};
#endif