#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int count = 0;
  
  char matriz[3][15] = {"Cauan", "Asfuri", "Henrique"};
  char *ponteiro[3];
  for(int i = 0; i < 3; i++) {
    printf("Seu nome \"%s\" tem %d caractes\n", matriz[i], strlen(matriz[i]));
  }
  
  printf("\nSeu nome abreviado é: ");
  for(int i = 0; i < 3; i++)
    printf("%c.", matriz[i][0]);

  char letra;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < strlen(matriz[i]); j++){
        letra = tolower(matriz[i][j]);
        if(letra == 'a' || letra == 'e' || letra == 'i' ||
          letra == 'o' || letra == 'u')
          count++;
    }
  }
  
  printf("\nSeu nome tem %d vogais", count);

  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < strlen(matriz[i]); j++){
      letra = tolower(matriz[i][j]);
        switch (ponteiro[i][j]) {
          case 'a':
            ponteiro[i][j] = '4';
            break;
          case 'e':
            ponteiro[i][j] = '3';
            break;
          case 'i':
            ponteiro[i][j] = '1';
            break;
          case 'o':
            ponteiro[i][j] = '0';
            break;
          case 'u':
            ponteiro[i][j] = '5';
            break;
        }
    }
  }
  for(int k = 0; k < 3; k++) {
    printf("\n%s", ponteiro[k]);
  }
    
 
  return 0;
}