#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");  // Padr�o em portugu�s, use v�rgulas em vez de pontos
  int falha = 0;
  float primeiro, segundo;
  double resultado;
  char operador;
  printf("Qual a opera��o que voc� vai fazer?\n");
  operador = getchar();
  printf("Qual o primeiro n�mero?\n");
  scanf("%f", &primeiro);
  printf("Qual o segundo n�mero?\n");
  scanf("%f", &segundo);
  switch (operador) {
    case '+':
    resultado = primeiro + segundo;
        break;
    case '-':
    resultado = primeiro - segundo;
        break;
    case '*':
    resultado = primeiro * segundo;
        break;
    case '/':
    resultado = primeiro / segundo;
        break;
  default:
        falha = 1;
        break;
  }
  switch (falha) {
  case 0:
    printf("O resultado � %g.\n", resultado);
    break;
  default:
  printf("Opera��o n�o existe\n");
    break;
  }
  system("pause");
}