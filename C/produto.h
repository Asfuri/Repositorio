#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {
  CELULAR,
  NOTEBOOK,
  TV
} categoria;

typedef struct {
  char nome[100];
  char marca[100];
  char modelo[100];
  float preco;
} infoGeral;

typedef enum {
  ANDROID,
  IOS
} tipoSO;

typedef struct {
  tipoSO SO;
  float GB;
} celular;

typedef struct {
  float tamanhoTela;
  float memoriaRAM;
} notebook;

typedef enum {
  HD,
  FULLHD,
  QK
} resolucao;

typedef struct {
  float tamanhoTela;
  resolucao resolucao;
} teve;

typedef union {
  celular celular;
  notebook notebook;
  teve TV;
} infoProduto;

typedef struct {
  categoria categoria;
  infoGeral informacao;
  infoProduto info;
} produto;

int CadatrarProduto(produto *array, int tamanho) {
  produto novo;
  printf("0 - Celular\t1 - Notebook\t2 - TV\n");
  printf("Escolha a categoria do produto: ");
  scanf("%d", &novo.categoria);
  getchar();
  printf("Digite o nome do produto: ");
  fgets(novo.informacao.nome, 100, stdin);
  printf("Digite a marca do produto: ");
  fgets(novo.informacao.marca, 100, stdin);
  printf("Digite o modelo do produto: ");
  fgets(novo.informacao.modelo, 100, stdin);
  printf("Digite o preco do produto: ");
  scanf("%f", &novo.informacao.preco);
  getchar();
  switch (novo.categoria) {
  case CELULAR:
    printf("Digite o Sistema Operacional: ");
    printf("0 - Android\t1 - iOS\n");
    scanf("%d", &novo.info.celular.SO);
    printf("Digite o armazenamento do celular: ");
    scanf(" %f", &novo.info.celular.GB);
    break;
  case NOTEBOOK:
    printf("Digite o tamanho da tela: ");
    scanf("%f", &novo.info.notebook.tamanhoTela);
    printf("Digite a quantidade de memoria RAM: ");
    scanf("%f", &novo.info.notebook.memoriaRAM);
    break;
  case TV:
    printf("Digite o tamanho da tela: ");
    scanf("%f", &novo.info.TV.tamanhoTela);
    printf("0 - HD\t1 - FullHD\t2 - 4K\n");
    printf("Escolha a resolucao: ");
    scanf("%d", &novo.info.TV.resolucao);
    break;
  default:
    printf("Categoria invalida\n");
    return tamanho;
    break;
  }

  array[tamanho] = novo;
  return tamanho + 1;
}

void imprimirInfoGerao(produto produto) {
  printf("Nome:\t%s", produto.informacao.nome);
  printf("Marca:\t%s\n", produto.informacao.marca);
  printf("Modelo:\t%s\n", produto.informacao.modelo);
  printf("Preco:\t%g\n", produto.informacao.preco);
}

void ImprimirProdutos(produto *array, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    switch (array[i].categoria) {
    case CELULAR:
      printf("\t\n--- Categoria: Celular ---\n");
      imprimirInfoGerao(array[i]);
      printf("Sistema Operacional:\t%s", array[i].info.celular.SO == ANDROID ? "Android\n" : "iOS\n");
      printf("Armazenamento:\t%gGB\n", array[i].info.celular.GB);
      break;
    case NOTEBOOK:
      printf("\t\n--- Categoria: NOTEBOOK ---\n");
      imprimirInfoGerao(array[i]);
      printf("Tamanho da tela:\t%g\n", array[i].info.notebook.tamanhoTela);
      printf("Memoria RAM:\t%gGB\n", array[i].info.notebook.memoriaRAM);
      break;
    case TV:
      printf("\t\n--- Categoria: TV ---\n");
      imprimirInfoGerao(array[i]);
      printf("Tamanho da tela:\t%g\n", array[i].info.TV.tamanhoTela);
      switch (array[i].info.TV.resolucao) {
      case HD:
        printf("Resolucao:\tHD\n");
        break;
      case FULLHD:
        printf("Resolucao:\tFullHD\n");
        break;
      case QK:
        printf("Resolucao:\t4K\n");
        break;
      default:
        printf("Resolucao invalida\n");
        break;
      }
      break;
    default:
      printf("Categoria invalida\n");
      break;
    }
  }
}

void pesquisarProdutos(produto *array, int tamanho) {
  char nome[100];
  int achado = 0;
  printf("Digite o nome do produto: ");
  fgets(nome, 100, stdin);
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(nome, array[i].informacao.nome) == 0) {
      imprimirInfoGerao(array[i]);
      achado = 1;
      return;
    }
  }
  if (achado != 1) {
    printf("Produto nao encontrado\n");
    return;
  }
}
