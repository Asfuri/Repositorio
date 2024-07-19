#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");  // Padrão em português, use vírgulas em vez de pontos
  int falha = 0;
  float primeiro, segundo;
  double resultado;
  char operador;
  printf("Qual a operação que você vai fazer?\n");
  operador = getchar();
  printf("Qual o primeiro número?\n");
  scanf("%f", &primeiro);
  printf("Qual o segundo número?\n");
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
    printf("O resultado é %g.\n", resultado);
    break;
  default:
  printf("Operação não existe\n");
    break;
  }
  system("pause");
}