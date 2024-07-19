#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese"); // Padr�o em portugu�s, use v�rgulas em vez de pontos
float peso, altura;
float imc;
printf("Qual o seu peso?\n");
scanf("%f", &peso);
printf("Qual a sua altura, em metros?\n");
scanf("%f", &altura);
imc = (peso/(altura*altura));
if (imc < 18.5) {
    printf("Voc� est� abaixo do peso ideal\n");
} else if (imc <= 24.9) {
    printf("Parab�ns - voc� est� em seu peso normal!\n");
} else if (imc <= 29.9) {
    printf("Voc� est� acima do seu peso (sobrepeso)\n");
} else if (imc <= 34.9) {
    printf("Obesidade grau I\n");
} else if (imc <= 39.9) {
    printf("Obesidade grau II\n");
} else {
    printf("Obesidade grau III\n");
}
  system("pause");
}