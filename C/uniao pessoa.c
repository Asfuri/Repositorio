#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  CACHORRO,
  GATO,
  PASSARO
} tipo_animais;
typedef struct {
  tipo_animais tipo;
  char nome[20];
} tAnimal;
typedef struct {
  char nome[50];
  int idade;
  float altura;
} tPessoa;
typedef union {
  tAnimal animal;
  tPessoa pessoa;
} tipo_pessoa, *ptrTipo_Pessoa;
void umAnimalOuUmaPessoa(int *tipo) {
  printf("Qual o tipo? 1- animal 2- pessoa\n");
  scanf("%d", tipo);
  getchar();
}

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  tipo_pessoa animalOuPessoa;
  int tipagem;
  umAnimalOuUmaPessoa(&tipagem);
  switch (tipagem) {
  case 1:
    printf("Qual o tipo do animal? 1 - cachorro 2- gato 3 - passaro \n");
    int tipoAnimal;
    scanf("%d", &tipoAnimal);
    getchar();
    animalOuPessoa.animal.tipo = tipoAnimal - 1;
    printf("Qual o nome do animal?\n");
    fgets(animalOuPessoa.animal.nome, 20, stdin);
    printf("Nome: %s", animalOuPessoa.animal.nome);
    printf("Tipo: ");
    switch (animalOuPessoa.animal.tipo) {
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
    break;
  case 2:
    printf("Qual o nome da pessoa?\n");
    fgets(animalOuPessoa.pessoa.nome, 50, stdin);
    printf("Qual a idade da pessoa?\n");
    scanf("%d", &animalOuPessoa.pessoa.idade);
    getchar();
    printf("Qual a altura da pessoa?\n");
    scanf("%f", &animalOuPessoa.pessoa.altura);
    printf("Nome: %s", animalOuPessoa.pessoa.nome);
    printf("Idade: %d anos\n", animalOuPessoa.pessoa.idade);
    printf("Altura: %g metros\n", animalOuPessoa.pessoa.altura);
    break;
  }
}