#include <iostream>
using namespace std;
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  typedef struct {
    string modelo, marca;
    float ano, preco;
  } Veiculo;
  Veiculo v1, v2;
  getline(cin, v1.modelo);
  getline(cin, v1.marca);
  cin >> v1.ano;
  cin >> v1.preco;
  cin.ignore();
  getline(cin, v2.modelo);
  getline(cin, v2.marca);
  cin >> v2.ano;
  cin >> v2.preco;
  if (v1.ano > v2.ano) {
    cout << v2.marca << " " << v2.modelo << endl;
  } else if (v2.ano > v1.ano) {
    cout << v1.marca << " " << v1.modelo << endl;
  } else if (v1.preco > v2.preco) {
    cout << v2.marca << " " << v2.modelo << endl;
  } else {
    cout << v1.marca << " " << v1.modelo << endl;
  }
}