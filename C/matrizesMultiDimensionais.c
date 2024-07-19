#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int maior = 0;
int linhas, colunas, ch, tamanhoAtual;
char ***matriz;
int main() {
  setlocale(LC_ALL, "Portuguese"); // Padr�o em portugu�s
  printf("Quantas linhas? ");
  scanf("%d", &linhas);

  while ((ch = getchar()) != '\n' && ch != EOF);
  printf("Quantas colunas? ");
  scanf("%d", &colunas);
  while ((ch = getchar()) != '\n' && ch != EOF);
  matriz = (char ***)malloc(linhas * sizeof(char **));
  if (matriz == NULL) {
    printf("ERRO!");
    exit(1);
    free(matriz);
  }
  for (int i = 0; i < linhas; i++) {
    matriz[i] = (char **)malloc(colunas * sizeof(char *));
    if (matriz[i] == NULL) {
      printf("ERRO!");
      // Libera a mem�ria j� alocada antes de sair
      for (int j = 0; j < i; j++) {
        free(matriz[j]);
      }
      free(matriz);
      exit(1);
    }
    for (int j = 0; j < colunas; j++) {
      scanf("%m[^\n]", &matriz[i][j]);
      while ((ch = getchar()) != '\n' && ch != EOF);
      if (j != colunas - 1) {                          /* verifica��o para n�o ser a �ltima coluna, a fim da formata��o da linha 46 ficar inalterada nesse caso */
        tamanhoAtual = strlen(matriz[i][j]);
        if (tamanhoAtual > maior) {
          maior = tamanhoAtual;
        }
      }
    }
  }
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%-*s ", maior, matriz[i][j]);            /* A m�scara de formata��o "%-*s" significa que ele alinhar� "-" a matriz em quantidade "*", definida pelo segundo par�metro (maior) */
    }
    printf("\n");
  }
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      free(matriz[i][j]);
    }
    free(matriz[i]);
  }
  free(matriz);
}