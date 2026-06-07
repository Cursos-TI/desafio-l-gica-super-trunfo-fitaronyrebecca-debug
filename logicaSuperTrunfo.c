#include <stdio.h>
#include <string.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[40];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados da carta 1

    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da carta 2

    printf("Carta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Calculo da densidade e do PIB per capita das cartas
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibicao da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


   int opcao1, opcao2;
   float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;
   float somaCarta1, somaCarta2;

   printf("\nEscolha o primeiro atributo:\n");
   printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade\n");
   scanf("%d", &opcao1);

   printf("\nEscolha o segundo atributo DIFERENTE:\n");
   printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade\n");
   scanf("%d", &opcao2);

   if (opcao1 == opcao2) {
   printf("Erro: escolha dois atributos diferentes!\n");
   return 0;
   }

   switch(opcao1) {
    case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
    case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
    case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
    case 4: valor1Carta1 = pontos1; valor1Carta2 = pontos2; break;
    case 5: valor1Carta1 = 1 / densidade1; valor1Carta2 = 1 / densidade2; break;
    default:
        printf("Opcao invalida!\n");
        return 0;
}

  switch(opcao2) {
    case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
    case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
    case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
    case 4: valor2Carta1 = pontos1; valor2Carta2 = pontos2; break;
    case 5: valor2Carta1 = 1 / densidade1; valor2Carta2 = 1 / densidade2; break;
    default:
        printf("Opcao invalida!\n");
        return 0;
}

    printf("\n==============================\n");
    printf(" COMPARAÇÃO DE CARTAS\n");
    printf("===============================\n");

    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    printf("\nSoma Carta 1: %.2f\n", somaCarta1);
    printf("Soma Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 > somaCarta2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else if (somaCarta2 > somaCarta1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
} else {
    printf("Resultado: Empate!\n");
}

return 0;

}
