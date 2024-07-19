#include <iostream>
#include <locale>
using namespace std;
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  int largura;
  int altura;
  cin >> largura;
  cin >> altura;
  int matriz[largura][altura];
  for (int i = 0; i < largura; i++) {
    for (int j = 0; j < altura; j++) {
      cin >> matriz[i][j];
    }
  }
  int zeros = 0;
  for (int i = 0; i < largura; i++) {
    for (int j = 0; j < altura; j++) {
      if (matriz[i][j] == 0) {
        zeros++;
      }
    }
  }
  if (zeros > (largura * altura * 0.7)) {
    cout << "A matriz é esparsa" << endl;
  } else {
    cout << "A matriz não é esparsa" << endl;
  }
}