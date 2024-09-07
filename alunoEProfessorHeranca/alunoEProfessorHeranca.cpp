#include "Aluno.h"
#include "Pessoa.h"
#include "Professor.h"
#include <iostream>
using namespace std;
int main() {
  Pessoa cidadao;
  Aluno estudante;
  Professor doutor;
  std::string nome, telefone, cpf, departamento;
  int disciplinas;
  float CRA;
  int semestre;
  getline(std::cin, nome);
  getline(std::cin, telefone);
  getline(std::cin, cpf);
  cidadao = Pessoa(nome, telefone, cpf);
  getline(std::cin, nome);
  getline(std::cin, telefone);
  getline(std::cin, cpf);
  cin >> CRA >> semestre;
  cin.ignore();
  estudante = Aluno(nome, telefone, cpf, CRA, semestre);
  getline(std::cin, nome);
  getline(std::cin, telefone);
  getline(std::cin, cpf);
  cin >> disciplinas;
  cin.ignore();
  getline(cin, departamento);
  cin.ignore();
  doutor = Professor(nome, telefone, cpf, disciplinas, departamento);
  cidadao.exibir();
  estudante.exibir();
  doutor.exibir();

}