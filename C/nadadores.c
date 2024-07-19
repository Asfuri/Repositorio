#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int ano, idade;
  printf ("Qual seu ano de nascimento?\n");
  scanf("%d", &ano);
  idade = 2024 - ano;
  printf("Nadador da idade %d é da categoria ", idade);
  if (idade >= 5 && idade <= 7) {
    printf ("Infantil A\n");
  }
  if (idade >= 8 && idade <= 10) {
    printf ("Infantil B\n");
  }
  if (idade >= 11 && idade <= 13) {
    printf( "Juvenil A\n");
  }
  if (idade >= 14 && idade <= 17){
    printf ("Juvenil B\n");
  }
  if (idade >= 18) {
    printf ("Sênior\n");
  }
  system("pause");
}