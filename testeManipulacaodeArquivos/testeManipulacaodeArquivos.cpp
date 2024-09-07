#include <fstream>
#include <iostream>
#include <string>
#ifndef PESSOA_H
#define PESSOA_H
using namespace std;
class Pessoa {
public:
  Pessoa();
  Pessoa(std::string nome, std::string telefone, std::string cpf);
  void exibir();
  void salvar(fstream &fp);
  std::string getNome(), getTelefone(), getCPF();

protected:
  std::string nome, telefone, cpf;

private:
};

#endif // PESSOA_H

Pessoa::Pessoa() {
}
Pessoa::Pessoa(std::string nome, std::string telefone, std::string cpf) {
  this->nome = nome;
  this->telefone = telefone;
  this->cpf = cpf;
}
void Pessoa::exibir() {
  std::cout << this->nome << " - " << this->telefone << " - CPF: " << this->cpf << std::endl;
}
std::string Pessoa::getNome() {
  return nome;
}
std::string Pessoa::getTelefone() {
  return telefone;
}
std::string Pessoa::getCPF() {
  return cpf;
}
void Pessoa::salvar(fstream &fp) {
  fp << nome << std::endl
     << telefone << std::endl
     << cpf << std::endl;
}

using namespace std;

Pessoa ps[12] = {
    Pessoa("Joao ABC", "98888", "999.999"),
    Pessoa("Maria EDF", "98765", "989.079")};

void salvarDadosArquivo() {
  fstream fp;
  fp.open("dados.txt", ios_base::out);
  if (!fp.is_open()) {
    cout << "ERRO!" << endl;
    return;
  }
  for (auto pessoa : ps) {
    pessoa.salvar(fp);
  }
  fp.close();
}

void lerDadosArquivo() {
  string n, t, c;
  int i = 0;
  fstream fp;
  fp.open("dados.txt", ios_base::in);
  if (!fp.is_open()) {
    cout << "ERRO!" << endl;
    return;
  }
  while (!fp.eof()) {
    getline(fp, n);
    getline(fp, t);
    getline(fp, c);
    Pessoa p = Pessoa(n, t, c);
    ps[i] = p;
    i++;
  }
  fp.close();
}
int main() {
  // lerDadosArquivo();
  for (auto pessoa : ps) {
    pessoa.exibir();
  }
  salvarDadosArquivo();
}
