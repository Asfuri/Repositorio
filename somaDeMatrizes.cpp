#include <iostream>
using namespace std;
int main() {
  int tamanhoA, tamanhoB;
  cin >> tamanhoA >> tamanhoB;
  int matrizA[tamanhoA][tamanhoB];
  int matrizB[tamanhoA][tamanhoB];
  int resultado[tamanhoA][tamanhoB];
  for (int i = 0; i < tamanhoA; i++) {
    for (int j = 0; j < tamanhoB; j++) {
      cin >> matrizA[i][j];
    }
  }
  for (int i = 0; i < tamanhoA; i++) {
    for (int j = 0; j < tamanhoB; j++) {
      cin >> matrizB[i][j];
    }
  }
  for (int i = 0; i < tamanhoA; i++) {
    for (int j = 0; j < tamanhoB; j++) {
      resultado[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
  for (int i = 0; i < tamanhoA; i++) {
    for (int j = 0; j < tamanhoB; j++) {
      cout << resultado[i][j] << " ";
    }
    cout << endl;
  }
}