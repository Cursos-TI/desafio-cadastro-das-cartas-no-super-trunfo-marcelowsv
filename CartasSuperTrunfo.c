#include <stdio.h>
#include <string.h>

int main(){

    // Variáveis da Carta 1
    char estado1[2];
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area_cidade1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Variáveis da Carta 2
    char estado2[2];
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area_cidade2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Variáveis resultados das comparações
    int vencedor_populacao, vencedor_area, vencedor_pib, vencedor_pontos;
    int vencedor_densidade, vencedor_pib_per_capita, vencedor_super_poder;

    printf("BEM VINDO AO SUPER TRUNFO - NIVEL MESTRE\n\n");

    // Entrada Carta 1
    printf("VAMOS REGISTRAR A 1° CIDADE\n\n");
    printf("Estado (A-H): ");
    scanf("%s",estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade: ");
    getchar();
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area_cidade1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada Carta 2
    printf("\nVAMOS REGISTRAR A 2° CIDADE\n\n");
    printf("Estado (A-H): ");
    scanf("%s", estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade: ");
    getchar();
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area_cidade2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos Carta 1
    densidade_populacional1 = (float)populacao1 / area_cidade1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
    super_poder1 = (float)populacao1 + area_cidade1 + (pib1 * 1000000000.0) +
                   pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Cálculos Carta 2
    densidade_populacional2 = (float)populacao2 / area_cidade2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    super_poder2 = (float)populacao2 + area_cidade2 + (pib2 * 1000000000.0) +
                   pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Comparações (0 = Carta 1 venceu, 1 = Carta 2 venceu)
    vencedor_populacao = (populacao1 < populacao2); 
    vencedor_area = (area_cidade1 < area_cidade2); 
    vencedor_pib = (pib1 < pib2); 
    vencedor_pontos = (pontos_turisticos1 < pontos_turisticos2); 
    vencedor_densidade = (densidade_populacional1 < densidade_populacional2); 
    vencedor_pib_per_capita = (pib_per_capita1 < pib_per_capita2); 
    vencedor_super_poder = (super_poder1 < super_poder2); 

    // Exibindo cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Resultados
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");

    printf("População: Carta %d venceu\n", vencedor_populacao + 1);
    printf("Área: Carta %d venceu\n", vencedor_area + 1);
    printf("PIB: Carta %d venceu\n", vencedor_pib + 1);
    printf("Pontos Turísticos: Carta %d venceu\n", vencedor_pontos + 1);
    printf("Densidade Populacional: Carta %d venceu\n", vencedor_densidade + 1);
    printf("PIB per Capita: Carta %d venceu\n", vencedor_pib_per_capita + 1);
    printf("Super Poder: Carta %d venceu\n", vencedor_super_poder + 1);

    return 0;
}
