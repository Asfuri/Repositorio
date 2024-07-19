#include <iostream>
#include <string>
using namespace std;
typedef struct {
  string descricao;
  float peso;
  char tipo;
} Movel;
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  int N, s10 = 0, mReal = 0, maisPesado = 0;
  float temp = 0;
  cin >> N;
  Movel moveis[N];
  cin.ignore();
  for (int i = 0; i < N; i++) {
    getline(cin, moveis[i].descricao);
    cin >> moveis[i].peso >> moveis[i].tipo;
    cin.ignore();
  }
  for (int i = 0; i < N; i++) {
    if (moveis[i].peso > 10 && moveis[i].tipo == 's') {
      s10++;
    }
    if (moveis[i].descricao.find("Real") < moveis[i].descricao.length() && moveis[i].descricao.substr(moveis[i].descricao.length() - 4) == "Real") {
      mReal++;
    }
    if (moveis[i].peso > temp) {
      temp = moveis[i].peso;
      maisPesado = i;
    }
  }
  cout << "Tipo 's' acima de 10Kg: " << s10 << endl;
  cout << "Termina em \"Real\": " << mReal << endl;
  cout << "Mais pesado: \"" << moveis[maisPesado].descricao << "\"" << endl;
}