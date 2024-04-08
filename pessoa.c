#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  typedef struct {
    char nome[50];
    int idade;
    float altura;
  } Pessoa/*,  *ptrPessoa */;
  Pessoa Pessoa1;
  /* ptrPessoa ptrPessoa1; */
  scanf("%s", Pessoa1.nome);
  getchar();
  scanf("%d", &Pessoa1.idade);
  getchar();
  scanf("%f", &Pessoa1.altura);
  printf("Nome: %s\n", Pessoa1.nome);
  printf("Idade: %d\n", Pessoa1.idade);
  printf("Altura: %g\n", Pessoa1.altura);
}