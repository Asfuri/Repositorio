#include <exception>
#include <iostream>
#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

class OrcamentoEstouradoException : public std::exception {
public:
  OrcamentoEstouradoException();
  virtual ~OrcamentoEstouradoException();

  virtual const char* what() const throw();

private:
  std::string mensagem;
};
#endif