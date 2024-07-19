#include "Funcionario.h"
#include <iostream>
std::string Funcionario::getNome() {
  return this->nome;
}
std::string Funcionario::getSobrenome() {
  return this->sobrenome;
}
float Funcionario::getSalario() {
  return this->salario;
}
float Funcionario::getSalarioAnual() {
  return this->salario * 12;
}
void Funcionario::setNome(std::string nome) {
  this->nome = nome;
}
void Funcionario::setSobrenome(std::string sobrenome) {
  this->sobrenome = sobrenome;
}
void Funcionario::setSalario(float salario) {
  if (salario > 0)
    this->salario = salario;
  else
    this->salario = 0;
}
void Funcionario::aumentaSalario(float percent) {
  this->setSalario(this->salario + this->salario * percent);
}
Funcionario::Funcionario() {}
Funcionario::Funcionario(float salario, std::string nome, std::string sobrenome) {
  this->setNome(nome);
  this->setSobrenome(sobrenome);
  this->setSalario(salario);
}