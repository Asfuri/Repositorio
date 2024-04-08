#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
int media = 0;

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  scanf("%d", &n);
  int *vetor = (int *)malloc(n * sizeof(int));
  if (vetor == NULL) {
    printf("ERRO!");
    free(vetor);
    exit(1);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
    media = media + vetor[i];
  }
  media = media / n;
  printf("%d", media);

  free(vetor);
}