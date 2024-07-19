#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  typedef union {
    int inteiro;
    float pontoflutuante;
    char caractere[100];
  } tipo_dado, *ptr_dado;
  tipo_dado dado;
  ptr_dado ponteiro_dado;
  ponteiro_dado = &dado;
  (*ponteiro_dado).inteiro = 3;
  printf("%d",dado.inteiro);
}