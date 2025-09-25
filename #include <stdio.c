#include <stdio.h>

int main() {
    // Variáveis para carta 01
    char estado1[50];
    char codigo1[10];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int ponto_tur1;

    // Variáveis para carta 02
    char estado2[50];
    char codigo2[10];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto_tur2;

    // Entrada de dados da carta 01
    printf("Insira os dados da carta 01\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto_tur1);

    // Entrada de dados da carta 02
    printf("\nInsira os dados da carta 02\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto_tur2);

    // Exibição dos dados da carta 01
    printf("\n--- Carta 01 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_tur1);

    // Exibição dos dados da carta 02
    printf("\n--- Carta 02 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_tur2);

    return 0;
}
