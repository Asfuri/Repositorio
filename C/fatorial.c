#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numero;

int fatorial(numero) {
  setlocale(LC_ALL, "Portuguese"); // Padr�o em portugu�s
  if (numero < 0) {
    return -1;
  } else {
    if (numero == 0) {
      return 1;
    } else {
      return numero * fatorial(numero - 1);
    }
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padr�o em portugu�s
  printf("Digite um n�mero para calcular o fatorial: ");
  scanf("%d", &numero);
  printf("O fatorial de %d � %d", numero, fatorial(numero));
}