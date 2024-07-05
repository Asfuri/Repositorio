#include <iostream>
using namespace std;
typedef struct {
  string nome;
  int idade = 0;
  int chutes = 0;
  int gols = 0;
} Jogador;
Jogador qualConverteuMais() {
  Jogador j1, j2;
  getline(cin, j1.nome);
  cin >> j1.idade >> j1.chutes >> j1.gols;
  cin.ignore();
  getline(cin, j2.nome);
  cin >> j2.idade >> j2.chutes >> j2.gols;
  if (1.0 * j1.gols / j1.chutes > 1.0 * j2.gols / j2.chutes) {
    return j1;
  } else
    return j2;
}

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  Jogador ganhador = qualConverteuMais();
  cout << ganhador.nome << " (" << ganhador.idade << ")" << endl;
}