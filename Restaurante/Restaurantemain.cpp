#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include "Restaurante.h"
#include <iostream>
using namespace std;
int main() {
  int numero = 0;
  int quantidade = 0;
  int numeroDaMesa = 0;
  std::string descricao;
  float preco = 0.0;
  Restaurante restaurante = Restaurante(10);
  do {
    std::cin >> numero;
    if (numero < 0)
      break;
    std::cin.ignore();
    getline(std::cin, descricao);
    std::cin >> quantidade >> preco >> numeroDaMesa;
    Pedido pedido = Pedido(numero, quantidade, descricao, preco);
    restaurante.adicionarPedido(pedido, numeroDaMesa);
  } while (numero >= 0);
  for (int i = 0; i < restaurante.todasAsMesas.size(); i++) {
    MesaDeRestaurante mesa = restaurante.todasAsMesas[i];
    if (mesa.calculaTotal() != 0) {
      std::cout << "Mesa " << i << std::endl;
      mesa.exibeConta();
      std::cout << "Total: R$ " << mesa.calculaTotal() << std::endl << std::endl;
    }
  }
  std::cout << "Total Restaurante: R$ "  << restaurante.calculaTotalRestaurante();
}