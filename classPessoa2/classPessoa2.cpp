#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  int N;
  cin >> N;
  cin.ignore();
  Pessoa *pessoas = new Pessoa[N];
  for (int i = 0; i < N; i++) {
    int idade;
    std::string nome, telefone;
    getline(cin, nome);
    cin >> idade;
    cin.ignore();
    getline(cin, telefone);
    pessoas[i].Pessoa::setIdade(idade);
    pessoas[i].Pessoa::setNome(nome);
    pessoas[i].Pessoa::setTelefone(telefone);
  }
  std::string pesquisa;
  int achado = 0;
  getline(cin, pesquisa);
  for (int i = 0; i < N; i++) {
    if (pessoas[i].getNome().string::find(pesquisa) < pessoas[i].getNome().length()) {
      std::cout << pessoas[i].getNome() << ", " << pessoas[i].getIdade() << ", " << pessoas[i].getTelefone() << std::endl;
      achado++;
    }
  }
    if (achado == 0) {
      std::cout << "Pessoa não encontrada" << endl;
    }
}