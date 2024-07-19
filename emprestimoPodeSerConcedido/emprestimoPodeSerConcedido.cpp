#include <iostream>
using namespace std;
int main() {
float salario, emprestimo;
int prestacoes;
do {
cin >> salario;
} while (salario <= 0);
do {
cin >> emprestimo;
} while (emprestimo <= 0);
do {
cin >> prestacoes;
} while (prestacoes <= 0);
float valor_prestacao = emprestimo / prestacoes;
if (valor_prestacao < salario * 0.3) {
  cout << "Emprestimo pode ser concedido" << endl;
  }
  else cout << "Emprestimo nao pode ser concedido" << endl;
}