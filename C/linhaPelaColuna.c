#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHOMATRIZ 3
#define LINHATROCADA 1

int temp[TAMANHOMATRIZ];
int matriz[TAMANHOMATRIZ][TAMANHOMATRIZ];

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  for (int i = 0; i < TAMANHOMATRIZ; i++) {
    for (int j = 0; j < TAMANHOMATRIZ; j++) {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < TAMANHOMATRIZ; i++) {
    temp[i] = matriz[LINHATROCADA][i];
    matriz[LINHATROCADA][i] = matriz[i][LINHATROCADA];
    matriz[i][LINHATROCADA] = temp[i];
  }

  for (int i = 0; i < TAMANHOMATRIZ; i++) {
    for (int j = 0; j < TAMANHOMATRIZ; j++) {
      printf("%d ", matriz[i][j]);
    }
  }
}