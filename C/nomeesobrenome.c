#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nomeCompleto[200];
    char nome[100];
    char sobrenome[100];
    printf("Digite seu nome completo: \n");
    fgets(nomeCompleto, 200, stdin);
    char *temp = strtok(nomeCompleto, " ");
    if (temp != NULL) {
        strcpy(nome, temp);
        temp = strtok(NULL, " ");
         printf("Seu primeiro nome é: %s\n", nome);
    }
    while (temp != NULL) {
        strcpy(sobrenome, temp);
        temp = strtok(NULL, " ");
        printf("Seu(s) sobrenome(s) é(são): %s\n", sobrenome);
    }
    system("pause");
}