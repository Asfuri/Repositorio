#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  TrabalhadorAssalariado assal;
  TrabalhadorPorHora porh;
  std::string nome;
  for (int i = 0; i < N; i++) {
    int cod;
    cin >> cod;
    cin.ignore();
    float salario;
    float valorH;
    int horasSemanais;
    switch (cod) {
    case 1:
      getline(cin, nome);
      cin >> salario;
      cin.ignore();
      assal = TrabalhadorAssalariado(salario);
      assal.setNome(nome);
      cout << assal.getNome() << " - Semanal: R$ " << assal.calcularPagamentoSemanal() << " - Mensal: R$ " << assal.TrabalhadorAssalariado::getSalario() << endl;
      break;
    case 2:
      getline(cin, nome);
      cin >> valorH;
      cin >> horasSemanais;
      cin.ignore();
      porh = TrabalhadorPorHora(valorH);
      porh.setNome(nome);
      cout << porh.getNome() << " - Semanal: R$ " << porh.calcularPagamentoSemanal(horasSemanais) << " - Mensal: R$ " << porh.TrabalhadorPorHora::getSalario() << endl;
      break;
    default:
      break;
    }
  }
}