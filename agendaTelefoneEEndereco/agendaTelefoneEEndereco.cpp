#include "Endereco.h"
#include "Pessoa.h"
#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  cin.ignore();
  Pessoa listaDePessoas[N];
  for (int i = 0; i < N; i++) {
    std::string nome, telefone, rua, numero, bairro, cidade, estado, cep;
    getline(std::cin, nome);
    getline(std::cin, telefone);
    getline(std::cin, rua);
    getline(std::cin, numero);
    getline(std::cin, bairro);
    getline(std::cin, cidade);
    getline(std::cin, estado);
    getline(std::cin, cep);
    Endereco endereco(rua, numero, bairro, cidade, estado, cep);
    listaDePessoas[i] = Pessoa(nome, endereco, telefone);
  }
  for (int i = 0; i < N; i++) {
    cout << listaDePessoas[i].toString() << "\n\n";
  }
}