#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 3

typedef struct {
  char nome[100];
  int idade;
  float notas[3];
  float media;
} tAluno, *tPtrAluno;
tAluno alunos[10];
tPtrAluno ponteiroAluno = alunos;
void calculaMedia(tPtrAluno ponteiroTemporario) {
  ponteiroTemporario->media = 0;
  for (int i = 0; i < 3; i++) {
    ponteiroTemporario->media += ponteiroTemporario->notas[i];
  }
  ponteiroTemporario->media /= 3;
}
int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português
  for (int i = 0; i < MAX_ALUNOS; i++) {
    printf("Digite o nome do aluno: \n");
    fgets(ponteiroAluno->nome, 100, stdin);
    printf("Digite a idade do aluno: \n");
    scanf("%d", &ponteiroAluno->idade);
    printf("Digite a primeira nota: \n");
    scanf("%f", &ponteiroAluno->notas[0]);
    printf("Digite a segunda nota: \n");
    scanf("%f", &ponteiroAluno->notas[1]);
    printf("Digite a terceira nota: \n");
    scanf("%f", &ponteiroAluno->notas[2]);
    getchar();
    calculaMedia(ponteiroAluno);
    ponteiroAluno++;
  }
  ponteiroAluno = &alunos[0];
  for (int i = 0; i < MAX_ALUNOS; i++) {
    printf("Nome: %s", ponteiroAluno->nome);
    printf("Idade: %d\n", ponteiroAluno->idade);
    printf("Média: %g\n", ponteiroAluno->media);
    ponteiroAluno++;
  }
}