#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double primeiraFuncao(double a, int b) {
  double resultado = 1;
  for (int i = 0; i < b; i++) {
    resultado *= a;
  }
  return resultado;
}

double segundaFuncao(double a, int b) {
  if (b == 0) {
    return 1;
  } else {
    return a * segundaFuncao(a, b - 1);
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  double primeiro;
  int segundo;
  scanf("%lf", &primeiro);
  scanf("%d", &segundo);
  printf("%lf\n", primeiraFuncao(primeiro, segundo));
  printf("%lf\n", segundaFuncao(primeiro, segundo));
}