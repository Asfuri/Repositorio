#include <iostream>
#include <climits> // Inclui a biblioteca para usar INT_MIN
using namespace std;

int main() {
  int maior;
  int temp;
  // Inicializa a vari�vel maior com o menor valor poss�vel para um inteiro
  // para garantir que qualquer n�mero inserido ser� maior ou igual a ele.
  maior = INT_MIN;
  // Aumenta o loop para ler tr�s n�meros em vez de dois, garantindo que todos os tr�s n�meros sejam considerados.
  for (int i = 0; i < 3; i++) {
    cin >> temp;
    if (temp > maior) {
      maior = temp;
    }
  }
  cout << maior << endl;
  return 0;
}