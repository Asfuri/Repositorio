#include <iostream>
#ifndef traco
#define traco " - "

class Funcionario {
public:
  Funcionario();
  Funcionario(float salario, std::string nome, std::string sobrenome);
  float getSalario(), getSalarioAnual();
  std::string getNome(), getSobrenome();
  void setSalario(float salario), setNome(std::string nome), setSobrenome(std::string sobrenome), aumentaSalario(float percent);

private:
  std::string nome, sobrenome;
  float salario;
};
#endif