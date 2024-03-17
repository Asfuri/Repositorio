#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define numAlunos 6

int main() {
  setlocale(LC_ALL, "Portuguese"); // Padrão em português, coloque vírgula em vez de ponto
  char alunos[numAlunos][100];
  char situacao[numAlunos][25];
  float notas1[numAlunos], notas2[numAlunos], medias[numAlunos];
  float totalTurma = 0, reprovados = 0, aprovados = 0, final = 0;
  float preprovados, pfinal, paprovados;
  for (int indice = 0; indice < numAlunos; indice++) {
    printf("Digite o nome do aluno %d: ", indice + 1);
    fgets(alunos[indice], sizeof(alunos[indice]), stdin);
    alunos[indice][strcspn(alunos[indice], "\n")] = 0; // Remove o \n do fgets
    printf("Digite a primeira nota do aluno %d: ", indice + 1);
    scanf("%g", &notas1[indice]);
    printf("Digite a segunda nota do aluno %d: ", indice + 1);
    scanf("%g", &notas2[indice]);
    getchar();
    medias[indice] = (notas1[indice] + notas2[indice]) / 2;
    totalTurma += medias[indice];
  }
  printf("%-100s %-5s %-5s %-5s %-8s\n", "Aluno", "Nota1", "Nota2", "Media", "Situacao"); // Os "%-s" são mascaras de formatação para alinhar a esquerda
  for (int indice = 0; indice < numAlunos; indice++) {
    if (medias[indice] >= 7) {
      strcpy(situacao[indice], "foi aprovado");
      aprovados++;
    } else if (medias[indice] >= 5) {
      strcpy(situacao[indice], "ficou de final");
      final++;
    } else {
      strcpy(situacao[indice], "foi reprovado");
      reprovados++;
    }
    printf("%-100s %-5g %-5g %-5g %-8s\n \n", alunos[indice], notas1[indice], notas2[indice], medias[indice], situacao[indice]); // Mesmo da linha 27
  }
  paprovados = aprovados / numAlunos * 100;
  pfinal = final / numAlunos * 100;
  preprovados = reprovados / numAlunos * 100;
  printf("A media da turma e: %g\n", totalTurma / numAlunos);
  printf("A porcentagem de alunos aprovados e: %g%%\n", paprovados);
  printf("A porcentagem de alunos de final e: %g%%\n", pfinal);
  printf("A porcentagem de alunos reprovados e: %g%%\n", preprovados);
  system("pause");
}
