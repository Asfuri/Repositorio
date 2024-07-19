#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  CIRCULO,
  QUADRADO,
  RETANGULO
} tipo_figura;

typedef struct {
  tipo_figura tipo;
  void *dados;
} figura;

typedef struct {
  float raio;
  float area;
} tCirculo;

typedef struct {
  float largura;
  float area;
} tQuadrado;

typedef struct {
  float largura;
  float comprimento;
  float area;
} tRetangulo;

void escolher(char escolha) {
  tCirculo circulo;
  tQuadrado quadrado;
  tRetangulo retangulo;
  switch (escolha) {
  case '1':
    printf("Digite o raio do circulo: ");
    scanf("%f", &circulo.raio);
    circulo.area = 6.28 * circulo.raio;
    printf("A �rea do c�rculo � %g", circulo.area);
    break;
  case '2':
    printf("Digite a largura do quadrado: ");
    scanf("%f", &quadrado.largura);
    quadrado.area = quadrado.largura * quadrado.largura;
    printf("A �rea do quadrado �: %g", quadrado.area);
    break;
  case '3':
    printf("Digite a largura do retangulo: ");
    scanf("%f", &retangulo.largura);
    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &retangulo.comprimento);
    retangulo.area = retangulo.largura * retangulo.comprimento;
    printf("A �rea do retangulo �: %g", retangulo.area);
    break;
  default:
  printf("erro");
    break;
  }
}
int main() {
  setlocale(LC_ALL, "Portuguese"); // Padr�o em portugu�s
  printf("Escolha uma forma: (1- C�rculo 2- Quadrado 3- Ret�ngulo)\n");
  char escolha = getchar();
  escolher(escolha);
}