#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vetor[10];
void funcao(int *vetor) {
  for (int i = 0; i < 10; i++) {
    if (vetor[i] % 2 == 0) {
      vetor[i] = 1;
    } else {
      vetor[i] = 0;
    }
  }
}
int main() {
  printf("Digite os valores do vetor:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }
  printf("Vetor original:   ");
  for (int i = 0; i < 10; i++) {
    printf("%-5d ", vetor[i]);
  }
  funcao(vetor);
  printf("\nVetor modificado: ");
  for (int i = 0; i < 10; i++) {
    printf("%-5d ", vetor[i]);
  }
}