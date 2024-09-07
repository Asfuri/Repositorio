#include "GerenciadorEleitores.h"
#include <iostream>
#include <locale>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;
int main() {
#ifdef _WIN32
  std::setlocale(LC_ALL, "Portuguese_Brazil.1252");
  SetConsoleOutputCP(1252);
  SetConsoleCP(1252);
#endif
  GerenciadorEleitores TribunalSuperior = GerenciadorEleitores();
  int N, idade;
  std::string nome, titulo;
  std::cin >> N;
  std::cin.ignore();
  for (int i = 0; i < N; i++) {
    getline(std::cin, nome);
    std::cin >> idade;
    std::cin.ignore();
    getline(std::cin, titulo);
    TribunalSuperior.cadastrarEleitor(nome, idade, titulo);
  }
  TribunalSuperior.verificaEleitores();
}