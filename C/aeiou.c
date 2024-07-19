#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int vogais =  0;
  int i = 0;
  char frase[100];
  printf("Escreva aqui uma frase de até 100 caracteres: \n");
  fgets(frase, 100, stdin);
  printf("A frase que você digitou foi: %s\n", frase);
    for (i = 0; i < 100; i++) {
    switch (tolower(frase[i])) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      vogais++;
      break;
      default:
      break;
    }
  }
  printf("A quantidade de vogais que você digitou é: %i\n",vogais);
  system("pause");
}