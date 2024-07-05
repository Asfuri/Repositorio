#include <iostream>
#include <climits> // Inclui a biblioteca para usar INT_MIN
using namespace std;

int main() {
  int maior;
  int temp;
  // Inicializa a variável maior com o menor valor possível para um inteiro
  // para garantir que qualquer número inserido será maior ou igual a ele.
  maior = INT_MIN;
  // Aumenta o loop para ler três números em vez de dois, garantindo que todos os três números sejam considerados.
  for (int i = 0; i < 3; i++) {
    cin >> temp;
    if (temp > maior) {
      maior = temp;
    }
  }
  cout << maior << endl;
  return 0;
}