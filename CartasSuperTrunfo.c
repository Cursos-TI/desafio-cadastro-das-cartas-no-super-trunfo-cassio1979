#include <stdio.h>
int main() {
    char cidade1[50], cidade2[50], estado1[50], estado2[50], codigo1[10], codigo2[10];
    int pontos1, pontos2, opcao; 
    float area1, area2, pib1, pib2, densidade1, densidade2;
    unsigned long int populacao1, populacao2, pib_per_capita1, pib_per_capita2;

    printf("Digite o codigo do estado de Carta 1 de A a H: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Digite a cidade: \n");
    scanf(" %49[^\n]", cidade1);
    printf("Digite a populacao: \n");
    scanf("%lu", &populacao1);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);

    pib_per_capita1 = pib1/populacao1;
    densidade1 = populacao1/area1;

  
    printf("Digite o codigo do estado de Carta 2 de A a H: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Digite a cidade: \n");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a populacao: \n");
    scanf("%lu", &populacao2);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

    pib_per_capita2 = pib2/populacao2;
    densidade2 = populacao2/area2;

    printf("Carta1\n Estado: %s\n Codigo: %s\n Nome da cidade: %s\n Populacao: %.3lu habitantes\n Área: %.2f km2\n PIB: %.2f bilhoes de reais\n Numero de Pontos Turisticos: %d\n pib per capita1: %.2lu reais\n densidade demográfica: %.2f hab/km2\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, pib_per_capita1, densidade1);
    printf("Carta2\n Estado: %s\n Codigo: %s\n Nome da cidade: %s\n Populacao: %.3lu habitantes\n Área: %.2f km2\n PIB: %.2f bilhoes de reais\n Numero de Pontos Turisticos: %d\n pib per capita1: %.2lu reais\n densidade demográfica: %.2f hab/km2\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, pib_per_capita2, densidade2);
    
    unsigned long int super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 - densidade1;
    unsigned long int super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 - densidade2;


    //Comparar as cartas
    printf("Agora vamos comparar as cartas!\n");
    printf("Escolha um dos atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu o atributo População\n");
            printf("Carta 1 - População: %lu habitantes\nCarta 2 - População: %lu habitantes\n", populacao1, populacao2);
        break;
        case 2:
            printf("Você escolhei o atributo Área\n");
            printf("Carta 1 - Área: %f km2\nCarta 2 - Área: %f km2\n", area1, area2);
        break;
        case 3:
            printf("Você escolheu o atributo PIB\n");
            printf("Carta 1: - PIB: %.2f bilhões de reais\nCarta 2 - PIB: %.2f bilhões de reais\n", pib1, pib2);
        break;
        case 4:
            printf("você escolheu o atributo Número de Pontos Turísticos\n");
            printf("Carta 1 - Pontos: %d\nCarta 2 - Pontos %d\n", pontos1, pontos2);
        break;
        case 5:
            printf("Você escolheu o atributo PIB per capita\n");
            printf("Carta 1 - ppc: %lu reais/hab\nCarta 2 - ppc: %lu reais/hab\n", pib_per_capita1, pib_per_capita2);
        break;
        case 6:
            printf("Você escolheu o atributo Densidade Populacional\n");
            printf("Carta 1 - Densidade: %f hab/km2\nCarta 2 - Densidade: %f hab/km2\n", densidade1, densidade2);
        break;
    }
    if ((populacao1==populacao2) || (area1==area2) || (pib1==pib2) || (pontos1==pontos2) || (pib1==pib2) || (densidade1<densidade2)) {
        printf("Jogo empatado!\n");
    } else if ((populacao1>populacao2) || (area1>area2) || (pib1>pib2) || (pontos1>pontos2) || (pib1>pib2) || (densidade1<densidade2)) {
        printf("Carta 1 ganhou!\n");
    } else {
        printf("Carta 2 ganhou!\n");
            }  
return 0;
}
