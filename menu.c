#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

char matriz[100][100];
char opcao;
char *ptr = &opcao;
int i = 0;
int *ptrParaI = &i;
char nome[100];
char stringNula[] = {'\0'};

void paraPascalCase(char *nome) {
  int novaPalavra = 1;
  for (int i = 0; i < strlen(nome); i++) {
    if (nome[i] == ' ') {
      novaPalavra = 1;
    } else if (novaPalavra == 1) {
      nome[i] = toupper(nome[i]);
      novaPalavra = 0;
    } else {
      nome[i] = tolower(nome[i]);
    }
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  do {
    printf("Digite sua opção\n1 – Incluir pessoa; 2 – Listar pessoas; 3 – Remover pessoa; Outro Caractere – Sair:\n");
    opcao = getchar();
    getchar();
    switch (*ptr) {
    case '1':
      printf("Incluir pessoa\n");
      printf("Digite o nome da pessoa:\n");
      fgets(matriz[*ptrParaI], 100, stdin);
      paraPascalCase(matriz[*ptrParaI]);
      (*ptrParaI)++;
      break;
    case '2':
      printf("Lista de pessoas\n");
      int vazio = 0;
      for (int j = 0; j < i; j++) {
        if (matriz[j][0] != '\0' && matriz[j][0] != '\n') {
          printf("%s\n", matriz[j]);
          vazio = 1;
        }
      }
      if (vazio == 0) {
        printf("Nenhuma pessoa cadastrada!\n");
      }
      break;
    case '3':
      printf("Remover pessoas\n");
      printf("Digite o nome da pessoa que deseja remover:\n");
      fgets(nome, 100, stdin);
      paraPascalCase(nome);
      int achado = 0;
      for (int i = 0; i < 100; i++) {
        if (strcmp(nome, matriz[i]) == 0) {
          strcpy(matriz[i], stringNula);
          achado = 1;
          printf("Nome removido!\n");
        }
      }
      if (achado != 1) {
        printf("Nome não encontrado!\n");
      }
      break;
    default:
      printf("Opção inválida!\nSaindo...\n");
      break;
    }
  } while (*ptr == '1' || *ptr == '2' || *ptr == '3');
}