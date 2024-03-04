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
    int indiceNome = 0;
    int indiceSobrenome = 0;
    while (nomeCompleto[indiceNome] != ' ' && nomeCompleto[indiceNome] != '\0') {
        nome[indiceNome] = nomeCompleto[indiceNome];
        indiceNome++;
    }
    nome[indiceNome] = '\0';
    indiceNome++;
    while (nomeCompleto[indiceNome] != '\0') {
        sobrenome[indiceSobrenome] = nomeCompleto[indiceNome];
        indiceNome++;
        indiceSobrenome++;
    }
    sobrenome[indiceSobrenome] = '\0';
    printf("Seu primeiro nome é: %s\n", nome);
    printf("Seu(s) sobrenome(s) é(são): %s\n", sobrenome);
    system("pause");
}