#include <iostream>
using namespace std;
class Funcionario {
public:
  string nome, sobrenome;
  float salario, getSalarioAnual();
};
float Funcionario::getSalarioAnual() {
  return salario * 12.0;
}; 
int main() {
  // setlocale(LC_ALL, "Portuguese_Brazil");
  int N;
  cin >> N;
  Funcionario vetorDeFuncionarios[N];
  for (int i = 0; i < N ; i++) {
    cin.ignore();
    getline(cin, vetorDeFuncionarios[i].nome);
    getline(cin, vetorDeFuncionarios[i].sobrenome);
    cin >> vetorDeFuncionarios[i].salario;
  }
  for (int i = 0; i < N ; i++) {
    cout << vetorDeFuncionarios[i].nome << " " << vetorDeFuncionarios[i].sobrenome << " - " << vetorDeFuncionarios[i].salario << " - " << vetorDeFuncionarios[i].getSalarioAnual() << endl;
  }
}