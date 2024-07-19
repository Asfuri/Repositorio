#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int matriz[N];
  int atual;
  cin >> atual;
  matriz[0] = atual;
  int maior = atual;
  int menor = atual;
  int media = atual;
  for (int i = 1; i < N; i++) {
    cin >> matriz[N];
    media += matriz[N];
    if (matriz[N] < menor) {
      menor = matriz[N];
    } else if (matriz[N] > maior) {
      maior = matriz[N];
    }
  }
  media /= N;
  cout << menor << " " << maior << " " << media << endl;
}