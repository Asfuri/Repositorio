#include <iostream>
using namespace std;
int main() {
  int soma = 0;
  int matriz[10];
  for (int i = 0; i < 10; i++) {
    cin >> matriz[i];
    soma += matriz[i];
  }
  float media = soma / 10.0;
  cout << "Media: " << media << endl;
  cout << "Maiores que a media: ";
  for (int i = 0; i < 10; i++) {
    if (matriz[i] > media) {
      cout << matriz[i] << " ";
    }
  }
  cout << endl;
}