#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRES 3
#define QUATRO 4
int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  int matriz[TRES][QUATRO];
  int vetor[QUATRO] = {0, 0, 0, 0};
  for (int i = 0; i < TRES; i++) {
    for (int j = 0; j < QUATRO; j++) {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
      vetor[j] += matriz[i][j];
    }
  }
  printf("A soma dos elementos das colunas é: ");
  for (int i = 0; i < QUATRO; i++) {
    printf("%d ", vetor[i]);
  }
}