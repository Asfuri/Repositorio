#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  typedef enum {
    CACHORRO,
    GATO,
    PASSARO
  } tipo_animais;
  typedef struct {
    tipo_animais tipo;
    char nome[20];
  } animal, *ptrAnimal;
  animal a;
  ptrAnimal ponteiro = &a;
  strcpy(ponteiro->nome, "Morgana");
  ponteiro->tipo = 1;
  printf("Nome: %s\n", ponteiro->nome);
  printf("Tipo: ");
  switch (ponteiro->tipo) {
  case CACHORRO:
    printf("Cachorro\n");
    break;
  case GATO:
    printf("Gato\n");
    break;
  case PASSARO:
    printf("Pássaro\n");
    break;
  }
}