#include <exception>
#include <iostream>
#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H

class FuncionarioNaoExisteException : public std::exception {
public:
  FuncionarioNaoExisteException();
  virtual ~FuncionarioNaoExisteException();
  virtual const char *what() const throw();

private:
  std::string mensagem;
};
#endif