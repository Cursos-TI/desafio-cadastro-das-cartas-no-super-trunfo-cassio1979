#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade[50], estado[3];
    int codigo, PIB, pontos;
    float area, populacao;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo do estado da carta de A a H: \n");
    scanf("%s", estado);
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo);
    printf("Digite a cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%f", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%d", &PIB);
    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta_1\nCódigo do Estado: %c\nCódigo da carta: %d\nCidade: %s\nPopulação: %f milhões de habitantes\nÁrea: %f km2\nPIB: %d\nPontos Turísticos: %d\n", estado, codigo, cidade, populacao, area, PIB, pontos);
   
    return 0;
}
