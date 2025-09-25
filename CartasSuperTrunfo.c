#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1;
  char nome_cidade1;
  int populacao1;
  float area1;
  float pib1;
  int ponto_tur1;

  char estado2;
  char codigo2;
  char nome_cidade2;
  int populacao2;
  float area2;
  float pib2;
  int ponto_tur2;

  // Área para entrada de dados
printf("insira os dados da carta 01\n");
   printf("Estado\n");
    scanf(estado1);
  printf("Código da carta\n");
    scanf(codigo1);
  printf("Nome da Cidade\n");
    scanf(nome_cidade1);
  printf("população\n");
    scanf(populacao1);
  printf("área\n");
    scanf(area1);
  printf("PIB\n");
    scanf(pib1);
  printf("Número de pontos turisticos\n");
    scanf(ponto_tur1);

    printf("insira os dados da carta 02\n");
   printf("Estado\n");
    scanf(estado2);
  printf("Código da carta\n");
    scanf(codigo2);
  printf("Nome da Cidade\n");
    scanf(nome_cidade2);
  printf("população\n");
    scanf(populacao2);
  printf("área\n");
    scanf(area2);
  printf("PIB\n");
    scanf(pib2);
  printf("Número de pontos turisticos\n");
    scanf(ponto_tur2);
  
  // Área para exibição dos dados da cidade
  printf("carta 01");
  printf(estado1);
  printf(codigo1);
  printf(nome_cidade1);
  printf(populacao1);
  printf(area1);
  printf(pib1);
  printf(ponto_tur1);

  printf("carta 02");
  printf(estado2);
  printf(codigo2);
  printf(nome_cidade2);
  printf(populacao2);
  printf(area2);
  printf(pib2);
  printf(ponto_tur2);
return 0;
} 
