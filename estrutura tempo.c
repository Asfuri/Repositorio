#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  double hora;
  double minutos;
  double segundos;
} tempo;

double converteSegundos(tempo um) {
  double tempoEmSegundos = 0;
  tempoEmSegundos += um.hora * 3600;
  tempoEmSegundos += um.minutos * 60;
  tempoEmSegundos += um.segundos;
  return tempoEmSegundos;
}

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  tempo horario;
  printf("Digite a quantidade de horas:\n");
  scanf("%lf", &horario.hora);
  printf("Digite a quantidade de minutos: \n");
  scanf("%lf", &horario.minutos);
  printf("Digite a quantidade de segundos: \n");
  scanf("%lf", &horario.segundos);
  double resultado = converteSegundos(horario);
  printf("%g", resultado);
}