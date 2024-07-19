#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  char palavra[100];
  fgets(palavra, sizeof(palavra), stdin);
  printf("%s\n", palavra);
  int ePalindromo = 1;
  int j = 0;
  char palavraSemEspaco[strlen(palavra)];
  for (int i = 0; i < strlen(palavra); i++) {
    if (isalpha(palavra[i]) !=
        0) { // Se for uma letra, parte da biblioteca ctype.h
      palavraSemEspaco[j] = tolower(palavra[i]);
      j++;
    }
  }
  palavraSemEspaco[j] = '\0';
  for (int i = 0; i < j; i++) {
    if (palavraSemEspaco[i] != palavraSemEspaco[j - i - 1]) {
      ePalindromo = 0;
      break;
    }
  }
  printf("%d", ePalindromo);
}