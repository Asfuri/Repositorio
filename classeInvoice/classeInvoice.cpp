#include <iostream>
using namespace std;
class Invoice {
public:
  int numero;
  string descricao;
  int quantidade;
  float preco;
  float getInvoiceAmount();
};

float Invoice::getInvoiceAmount() {
  return quantidade * preco;
}
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  Invoice fatura1, fatura2;
  cin >> fatura1.numero;
  cin >> ws;
  getline(cin, fatura1.descricao);
  cin >> fatura1.quantidade >> fatura1.preco >> fatura2.numero;
  cin >> ws;
  getline(cin, fatura2.descricao);
  cin >> fatura2.quantidade >> fatura2.preco;
  if (fatura1.preco < 0) fatura1.preco = 0;
  if (fatura1.quantidade < 0) fatura1.quantidade = 0;
  if (fatura2.preco < 0) fatura2.preco = 0;
  if (fatura2.quantidade < 0) fatura2.quantidade = 0;
  cout << fatura1.numero << " - " << fatura1.descricao << " - " << fatura1.quantidade << " - " << fatura1.preco << " - " << fatura1.getInvoiceAmount() << endl;
  cout << fatura2.numero << " - " << fatura2.descricao << " - " << fatura2.quantidade << " - " << fatura2.preco << " - " << fatura2.getInvoiceAmount();
}