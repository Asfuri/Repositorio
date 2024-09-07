#include "Estatisticas.h"
#include "Livro.h"
#include "Pedido.h"
#include <iostream>
#include <locale>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;
int main() {
#ifdef _WIN32
  std::setlocale(LC_ALL, "Portuguese_Brazil.1252");
  SetConsoleOutputCP(1252);
  SetConsoleCP(1252);
#endif
  int Num, Ndois, quantidade, totalPaginas;
  float valorUnitario;
  std::string titulo;
  std::cin >> Num;
  Estatisticas<Pedido> estatisticasDosPedidos;
  Estatisticas<Livro> estatisticasDosLivros;
  Livro *l;
  Pedido *p;
  for (int i = 0; i < Num; i++) {
    std::cin >> valorUnitario >> quantidade;
    p = new Pedido(valorUnitario, quantidade);
    estatisticasDosPedidos.addEl(*p);
  }
  std::cin >> Ndois;
  std::cin.ignore();
  for (int i = 0; i < Ndois; i++) {
    getline(std::cin, titulo);
    std::cin >> totalPaginas;
    std::cin.ignore();
    l = new Livro(titulo, totalPaginas);
    estatisticasDosLivros.addEl(*l);
  }
  Pedido maiorPedido = estatisticasDosPedidos.getEl((estatisticasDosPedidos.indexOfMaior()));
  std::cout << "Maior: ";
  maiorPedido.print();
  Pedido menorPedido = estatisticasDosPedidos.getEl((estatisticasDosPedidos.indexOfMenor()));
  std::cout << "Menor: ";
  menorPedido.print();
  std::cout << "Média: ";
  std::cout << estatisticasDosPedidos.media() << std::endl;
  Livro maiorLivro = estatisticasDosLivros.getEl((estatisticasDosLivros.indexOfMaior()));
  std::cout << "Maior: ";
  maiorLivro.print();
  Livro menorLivro = estatisticasDosLivros.getEl((estatisticasDosLivros.indexOfMenor()));
  std::cout << "Menor: ";
  menorLivro.print();
  std::cout << "Média: ";
  std::cout << estatisticasDosLivros.media() << std::endl;
}