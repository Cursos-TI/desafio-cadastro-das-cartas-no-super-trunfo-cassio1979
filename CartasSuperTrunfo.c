#include<stdio.h>
int main() {
    char cidade1[50], cidade2[50], estado1[50], estado2[50], codigo1[10], codigo2[10];
    int pontos1, pontos2; 
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


    printf("Comparacao de cartas\n\n");
    printf("População: Carta 1 venceu?: %d\n", (populacao1 > populacao2));
    printf("Area: Carta 1 venceu?: %d\n", (area1 > area2));
    printf("PIB: Carta 1 venceu?: %d\n", (pib1 > pib2));
    printf("Pontos turisticos: Carta 1 venceu?: %d\n", (pontos1 > pontos2));
    printf("PIB per capita: Carta 1 venceu?: %d\n", (pib_per_capita1 > pib_per_capita2));
    printf("Densidade: Carta 1 venceu?: %d\n", (densidade1 > densidade2));
    printf("Super Poder: Carta 1 venceu? %d\n", (super_poder1 > super_poder2));
    
    return 0;
}
