#include <iostream>
using namespace std;
void itens() {
  std::cout << "1 - Item 1" << "\n" << "2 - Item 2" << "\n" << "3 - Item 3" << "\n" << "4 - Sair" << "\n";
}
int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  int opcao;
  do {
    itens();
    cin >> opcao;
    if (opcao > 0 && opcao < 4) {
      cout << "Item " << opcao << endl;
    } else if (opcao == 4) {
      cout << "Sair";
    } else {
      cout << "Opcao " << opcao << " Invalida" << endl << endl;
    }
  } while (opcao != 4);
}