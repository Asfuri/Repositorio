#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 10
int TAM = 10;
int vetor[tamanho];
int numero;
int i = 0;
int *ptr = &i;
int procurar(int *vetor, int numero) {
  if (*ptr >= TAM) {
    return -1;
  }
  if (vetor[*ptr] == numero) {
    return *ptr + 1;
  } else {
    (*ptr)++;
    return procurar(vetor, numero);
  }
}
void decrescente(int *vetor, int TAM) {
  int aux;
  for (int i = 0; i < TAM - 1; i++) {
    for (int j = 0; j < TAM - i - 1; j++) {
      if (vetor[j] < vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}
void crescente(int *vetor, int TAM) {
  int aux;
  for (int i = 0; i < TAM - 1; i++) {
    for (int j = 0; j < TAM - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}
int main() {
  setlocale(LC_ALL, "Portuguese"); // Padr�o em portugu�s
  for (int i = 0; i < TAM; i++) {
    printf("Digite o %d� n�mero: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("Vetor em ordem crescente: ");
  crescente(vetor, TAM);
  for (int i = 0; i < TAM; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\nVetor em ordem decrescente: ");
  decrescente(vetor, TAM);
  for (int i = 0; i < TAM; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\nDigite o n�mero que deseja procurar: ");
  scanf("%d", &numero);
  if (procurar(vetor, numero) == -1) {
    printf("N�mero n�o encontrado\n");
  } else
    printf("N�mero encontrado: %d� posi��o\n", procurar(vetor, numero));
}