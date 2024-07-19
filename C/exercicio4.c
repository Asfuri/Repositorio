#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Define a localização para português

  char matriz[3][20];

  printf("Digite seu nome (sem acentuação): ");
  scanf("%s", matriz[0]);

  printf("Digite seu primeiro sobrenome (sem acentuação): ");
  scanf("%s", matriz[1]);

  printf("Digite seu segundo sobrenome (sem acentuação): ");
  scanf("%s", matriz[2]);

  char *ponteiro[3];

  // Exercício a)

  for (int i = 0; i < 3; i++) {
    printf("Seu nome \"%s\" tem %zu caracteres\n", matriz[i],
           strlen(matriz[i])); // strlen(matriz[i]) é um unsigned long int, que
                               // deve ser impresso com %zu
  }

  // Exercício b)

  printf("\nSeu nome abreviado é: \n");
  for (int i = 0; i < 3; i++) {
    printf("%c.", matriz[i][0]);
  }

  // Exercício c)

  int count = 0;
  char letra;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < strlen(matriz[i]); j++) {
      letra = tolower(matriz[i][j]);
      switch (letra) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        count++;
        break;
      }
    }
  }

  printf("\nSeu nome tem %d vogais", count);

  // Exercício d)

  for (int i = 0; i < 3; i++) {
    ponteiro[i] = matriz[i];
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < strlen(matriz[i]); j++) {
      letra = tolower(matriz[i][j]);
      switch (ponteiro[i][j]) {
      case 'a':
        ponteiro[i][j] = '4';
        break;
      case 'e':
        ponteiro[i][j] = '3';
        break;
      case 'i':
        ponteiro[i][j] = '1';
        break;
      case 'o':
        ponteiro[i][j] = '0';
        break;
      case 'u':
        ponteiro[i][j] = '5';
        break;
      }
    }
    printf("\n\nSeu nome com vogais substituídas é: \n");
    for (int i = 0; i < 3; ++i) {
      printf("%s\n", ponteiro[i]);
    }
  }
}