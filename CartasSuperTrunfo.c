#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade[50], estado[50], cidade2[50], estado2[50];
    int codigo, codigo2, populacao, populacao2, pontos, pontos2;
    float area, area2, PIB, PIB2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo do estado da carta 1: \n");
    scanf(" %49[^\n]", estado);
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo);
    printf("Digite a cidade: \n");
    scanf(" %49[^\n]", cidade);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos);

    //Dados da segunda carta
    printf("Digite o codigo do estado da carta 2: \n");
    scanf(" %49[^\n]", estado2);
    printf("Digite o codigo da carta 2: \n");
    scanf("%d", &codigo2);
    printf("Digite a cidade 2: \n");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a área 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB 2: \n");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turísticos 2: \n");
    scanf("%d", &pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta_1\nCódigo do Estado: %s\nCódigo da carta: %d\nCidade: %s\nPopulação: %d milhões de habitantes\nÁrea: %.2f km2\nPIB: %.2f milhões de reais\nPontos Turísticos: %d\n\n", estado, codigo, cidade, populacao, area, PIB, pontos);
    printf("Carta_2\nCódigo do Estado: %s\nCódigo da carta: %d\nCidade: %s\nPopulação: %d milhões de habitantes\nÁrea: %.2f km2\nPIB: %.2f milhões de reais\nPontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, pontos2);

    return 0;
}
