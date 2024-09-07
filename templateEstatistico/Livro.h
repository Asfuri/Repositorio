#include <iostream>
#ifndef LIVRO_H
#define LIVRO_H

class Livro {
public:
  Livro();
  Livro(std::string titulo, int totalPaginas);
  int getTotal();
  void print();
  virtual ~Livro();

private:
  std::string titulo;
  int totalPaginas;
};
#endif