#include <iostream>
#include <vector>
using namespace std;
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  vector<int> numeros;
  int atual;
  do {
    cin >> atual;
    numeros.push_back(atual);
  } while (atual != 0);
  numeros.pop_back();
  int maior = INT_MIN, segundomaior = INT_MIN;
  int indiceMaior;
  for (int i = 0; i < numeros.size(); i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
      indiceMaior = i;
    }
  }
  numeros.erase(numeros.begin() + indiceMaior);
  for (int i = 0; i < numeros.size(); i++) {
    if (numeros[i] > segundomaior) {
      segundomaior = numeros[i];
    }
  }
  cout << "Maior: " << maior << endl;
  cout << "Segundo maior: " << segundomaior << endl;
}