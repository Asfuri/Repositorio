#include <iostream>
using namespace std;
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  typedef struct {
    int dia;
    int mes;
    int ano;
  } tData;
  int maisvelha;
  tData pessoa1;
  tData pessoa2;
  cin >> pessoa1.dia;
  cin >> pessoa1.mes;
  cin >> pessoa1.ano;
  cin >> pessoa2.dia;
  cin >> pessoa2.mes;
  cin >> pessoa2.ano;
  if (pessoa1.ano > pessoa2.ano) {
    maisvelha = 2;
  } else {
    if (pessoa1.ano == pessoa2.ano && pessoa1.mes > pessoa2.mes) {
      maisvelha = 2;
    } else {
      if (pessoa1.ano == pessoa2.ano && pessoa1.mes == pessoa2.mes && pessoa1.dia > pessoa2.dia) {
        maisvelha = 2;
      }
      if (pessoa1.ano == pessoa2.ano && pessoa1.mes == pessoa2.mes && pessoa1.dia == pessoa2.dia) {
        maisvelha = 0;
      } else {
        maisvelha = 1;
      }
    }
  }
  if (maisvelha == 1) {
    cout << "Pessoa 1 é mais velha" << endl;
  } else if (maisvelha == 2) {
    cout << "Pessoa 2 é mais velha" << endl;
  } else {
    cout << "Pessoas são da mesma idade" << endl;
  }
}