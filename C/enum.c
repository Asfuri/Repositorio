#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  typedef enum {
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
  } dia_semana, *ptrSemana;
  dia_semana dia;
  ptrSemana ponteiro_dia = &dia;
  *ponteiro_dia = TERCA;
  printf("%d", dia);
}