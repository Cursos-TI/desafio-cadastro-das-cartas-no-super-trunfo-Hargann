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

        //Nível Novato
    char estado1 = 'A', codigo1[3] = "1", nome1[20] = "Mato Grosso";
    char estado2 = 'B', codigo2[3] = "2", nome2[20] = "Mato Grosso do Sul";

    int popl1 = 1000000, popl2 = 2000000;
    int pontos1 = 100, pontos2 = 200;

    float area1 = 3500.0, area2 = 4000.0;
    float pib1 = 200.0, pib2 = 300.0;

    printf(" Carta 1: \n");
    printf(" Estado: %c\n", estado1);
    printf(" Codigo da Carta: %s\n", codigo1);
    printf(" Nome do Estado: %s\n", nome1);
    printf(" Populacao: %d\n", popl1);
    printf(" Area: %.2f km^2\n", area1);
    printf(" PIB: R$ %.2fB \n", pib1);
    printf(" Número de Pontos Turísticos: %d\n", pontos1);

    printf(" \n Carta 2: \n");
    printf(" Estado: %c\n", estado2);
    printf(" Codigo da Carta: %s\n", codigo2);
    printf(" Nome do Estado: %s\n", nome2);
    printf(" Populacao: %d\n", popl2);
    printf(" Area: %.2f km^2 \n", area2);
    printf(" PIB: R$ %.2fB \n", pib2);
    printf(" Número de Pontos Turísticos: %d\n", pontos2);

    //Nível Aventureiro
    float denspopul1 = (float) popl1 / area1;
    float denspopul2 = (float) popl2 / area2;

    float pibpercpt1 = (float) pib1 / popl1;
    float pibpercpt2 = (float) pib2 / popl2;

    printf(" \n Carta 1: \n");
    printf(" Densidade populacional: %.2f hab/km^2\n", denspopul1);
    printf(" PIB per capita: R$ %.2f\n", pibpercpt1);
    printf(" \n Carta 2: \n");
    printf(" Densidade populacional: %.2f hab/km^2\n", denspopul2);
    printf(" PIB per capita: R$ %.2f\n", pibpercpt2);

    //Nível Mestre
    float superpoder1 = popl1 + area1 + pib1 + pontos1 + denspopul1 + pibpercpt1;
    float superpoder2 = popl2 + area2 + pib2 + pontos2 + denspopul2 + pibpercpt2;
    printf(" \n Carta 1: \n");
    printf(" Superpoder: %.2f\n", superpoder1);
    printf(" \n Carta 2: \n");
    printf(" Superpoder: %.2f\n", superpoder2);

    //Comparação
    printf("\n Comparação de Cartas: \n");
    printf(" \n População: %s\n", (popl1 > popl2) ? "Carta 1" : "Carta 2");
    printf(" Área: %s\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf(" PIB: %s\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf(" Número de Pontos Turísticos: %s\n", (pontos1 > pontos2) ? "Carta 1" : "Carta 2");
    printf(" Densidade populacional: %s\n", (denspopul1 > denspopul2) ? "Carta 1" : "Carta 2");
    printf(" PIB per capita: %s\n", (pibpercpt1 > pibpercpt2) ? "Carta 1" : "Carta 2");
    printf(" Superpoder: %s\n", (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2");
    
    return 0;
}
