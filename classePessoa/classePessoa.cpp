#include <iostream>
using namespace std;
class Pessoa {
public:
  string nome, telefone;
  int idade;
};

int main() {
  Pessoa Pessoas[2];
  for (int i = 0; i < 2; i++) {
    getline(cin, Pessoas[i].nome);
    cin >> Pessoas[i].idade;
    cin >> ws;
    getline(cin, Pessoas[i].telefone);
  }
  for (int i = 0; i < 2; i++) {
    cout << Pessoas[i].nome << ", " << Pessoas[i].idade << ", " << Pessoas[i].telefone << endl;
  }
}