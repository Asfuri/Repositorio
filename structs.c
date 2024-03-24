#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[100];
  int idade;
} pessoa, *ptrPessoa;
pessoa Pessoas[100];
int i = 0;
int *ptrParaI = &i;
char opcao;
char *ptrOpcao = &opcao;
void adicionarPessoa() {
  if (*ptrParaI == 100) {
    printf("Número máximo de pessoas atingido\n");
    return;
  }
  printf("Digite o nome da pessoa: ");
  fgets(Pessoas[*ptrParaI].nome, 100, stdin);
  printf("Digite a idade da pessoa: ");
  scanf("%d", &Pessoas[*ptrParaI].idade);
  getchar();
  (*ptrParaI)++;
}
void exibirPessoas() {
  for (int j = 0; j < *ptrParaI; j++) {
    printf("Nome: %s", Pessoas[j].nome);
    printf("Idade: %d\n", Pessoas[j].idade);
  }
}
void modificarPessoas() {
  int numerodaPessoa = 0;
  printf("Qual o número da pessoa cujo nome você quer modificar? ");
  scanf("%d", &numerodaPessoa);
  getchar();
  printf("Digite o nome da pessoa: ");
  fgets(Pessoas[numerodaPessoa].nome, 100, stdin);
}
void modificarIdade() {
  int numerodaPessoa = 0;
  printf("Qual o número da pessoa cuja idade você quer modificar? ");
  scanf("%d", &numerodaPessoa);
  getchar();
  printf("Digite a idade da pessoa: ");
  scanf("%d", &Pessoas[numerodaPessoa].idade);
}
void removerPessoa() {
  int numerodaPessoa = 0;
  printf("Qual o número da pessoa que você quer remover? ");
  scanf("%d", &numerodaPessoa);
  getchar();
  for (int k = numerodaPessoa; k < *ptrParaI; k++) {
    strcpy(Pessoas[k].nome, Pessoas[k + 1].nome);
    Pessoas[k].idade = Pessoas[k + 1].idade;
  }
  (*ptrParaI)--;
}

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  do {
    printf("Digite a opção desejada:\n1-Adicionar pessoa\n2-Exibir pessoas\n3-Mudar o nome de uma pessoa\n4-Mudar a idade de uma pessoa\n5-Remover Pessoa\n6-Sair\n");
    scanf(" %c", ptrOpcao);
    while ((getchar()) != '\n') {
    }
    switch (*ptrOpcao) {
    case '1':
      adicionarPessoa();
      break;
    case '2':
      exibirPessoas();
      break;
    case '3':
      modificarPessoas();
      break;
    case '4':
      modificarIdade();
      break;
    case '5':
      removerPessoa();
      break;
    default:
      *ptrOpcao = '6';
      printf("Saindo...\n");
      break;
    }
  } while (*ptrOpcao == '1' || *ptrOpcao == '2' || *ptrOpcao == '3' || *ptrOpcao == '4' || *ptrOpcao == '5');
}