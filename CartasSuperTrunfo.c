#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
     // Declaração das variáveis para a carta 2
     char estado2;
     char codigo2[4];
     char nomeCidade2[100];
     int populacao2;
     float area2;
     float pib2;
     int pontosTuristicos2;

     // Leitura dos dados da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // lê a string com espaços

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
return 0;
} 
