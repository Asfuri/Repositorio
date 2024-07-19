#include "Invoice.h"
#include <iostream>
int main() {
  int numero1, numero2, quantidade1, quantidade2;
  float preco1, preco2;
  std::string descricao1, descricao2;
  std::cin >> numero1;
  std::cin.ignore();
  getline(std::cin, descricao1);
  std::cin >> quantidade1 >> preco1 >> numero2;
  std::cin.ignore();
  getline(std::cin, descricao2);
  std::cin >> quantidade2 >> preco2;
  Invoice *produto1 = new Invoice(numero1, descricao1, quantidade1, preco1);
  Invoice *produto2 = new Invoice(numero2, descricao2, quantidade2, preco2);
  produto1->Invoice::print();
  produto2->Invoice::print();
}