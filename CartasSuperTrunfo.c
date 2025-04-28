#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1, codigo1[4], nomeCidade1;
    int populacao1[50], pontostr1[2];
    float area1[50], pib1[50];
    
    char estado2, codigo2[4], nomeCidade2;
    int populacao2[50], pontostr2[2];
    float area2[50], pib2[50];

    printf("Digite o Estado (A-H): \n");
    scanf( "%c", &estado1);
    printf("Digite o Código da Carta (ex: B02): \n");
    scanf(" %c", &codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontostr1);

    printf("Digite a área da cidade em quilômetros quadrados (km^2): \n");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o Estado (A-H): \n");
    scanf( "%c", &estado2);
    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %c", &codigo2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontostr2);

    printf("Digite a área da cidade em quilômetros quadrados (km^2): \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib2);

    return 0;
}
