#include <iostream>
using namespace std;
int main() {
  int N, temp;
  cin >> N;
  int vetor[N];
  for (int i = 0; i < N; i++) {
    cin >> vetor[i];
  }
  for (int i = 0; i < N; i++) {
    temp = vetor[i];
    for (int j = 0; j < N; j++) {
      if (temp == vetor[j] && i != j) {
        vetor[j] = 0;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    if (vetor[i] == 0) {
      continue;
    }
    cout << vetor[i] << " ";
  }
}