#include <iostream>
#include <math.h>
using namespace std;
typedef struct {
  int x;
  int y;
} Ponto;
Ponto maisProximo() {
  Ponto centro;
  cin >> centro.x;
  cin >> centro.y;
  int N;
  cin >> N;
  Ponto pontos[N];
  int distancias[N];
  for (int i = 0; i < N; i++) {
    cin >> pontos[i].x;
    cin >> pontos[i].y;
    float dx = abs(pontos[i].x - centro.x);
    float dy = abs(pontos[i].y - centro.y);
    distancias[i] = (dx * dx) + (dy * dy);
  }
  int menor = distancias[0];
  int menorIndice = 0;
  for (int i = 1; i < N; i++) {
    if (distancias[i] < menor) {
      menor = distancias[i];
      menorIndice = i;
    }
  }
  return pontos[menorIndice];
}
int main() {
  setlocale(LC_ALL,"Portuguese_Brazil");
  Ponto pontoMaisProximo = maisProximo();
  cout << "Ponto mais perto é (" << pontoMaisProximo.x << ", " << pontoMaisProximo.y << ")" << endl;
}