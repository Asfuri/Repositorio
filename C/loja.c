#include "produto.h"
#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

produto *Produtos;
char opcao;
char ch;
char *ptr = &opcao;
int tamanho = 0;

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  Produtos = (produto *)malloc(sizeof(produto) * 100); // Allocate memory for 100 products
  if (Produtos == NULL) {
    printf("Falha ao alocar memória para os produtos.\n");
    return 1;
  }
  do {
    // system("cls");
    printf("Digite sua opção\n1 - Incluir Produtos\t2 - Listar Produtos\t");
    printf("3 - Procurar Produto\tOutro Caractere - Sair:\n");
    scanf(" %c", &opcao);
    while ((ch = getchar()) != '\n' && ch != EOF);
    switch (*ptr) {
    case '1':
      printf("Incluir Produto\n");
      tamanho = CadatrarProduto(Produtos, tamanho);
      break;
    case '2':
      printf("Lista de Produtos\n");
      ImprimirProdutos(Produtos, tamanho);
      break;
    case '3':
      printf("Procurar Produto\n");
      pesquisarProdutos(Produtos, tamanho);
      break;
    default:
      printf("Opção inválida!\nSaindo...\n");
      break;
    }
  } while (*ptr == '1' || *ptr == '2' || *ptr == '3');
  free(Produtos);
}