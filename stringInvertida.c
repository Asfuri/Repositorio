#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  char *string;
  char *invertida;
  scanf("%m[^\n]", &string);
  int tamanhoDaString = strlen(string);
  invertida = (char *)malloc(1 + tamanhoDaString);
  
  // Verifica se a alocação de memória para invertida foi bem-sucedida
  if (invertida == NULL) {
    printf("ERRO!");
    free(string);
    exit(1);
  }

  for (int i = 0; i < tamanhoDaString; i++) {
    invertida[i] = string[tamanhoDaString - 1 - i];
  }
  invertida[tamanhoDaString] = '\0';
  printf("%s", invertida);
  
  free(string);
  free(invertida);
}