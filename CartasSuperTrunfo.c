#include <stdio.h>
#include <string.h>


int main(){

    //declarando variaveis para carta 1

    char estado1[2];
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    float area_cidade1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    
    //declarando variaveis para a carta 2

    char estado2[2];
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area_cidade2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("BEM VINDO AO SUPER TRUNFO\n\n");

    //dados carta 1
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
    scanf("%ld", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area_cidade1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);


    //dados carta 2

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
    scanf("%ld", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area_cidade2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);


    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 1
    densidade_populacional1 = (float)populacao1 / area_cidade1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; 

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 2
    densidade_populacional2 = (float)populacao2 / area_cidade2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; 

    //imprimindo as carta 1
    printf("\n--- Carta 1 ---\n");

    printf("Estado: %s\n", estado1);

    printf("Código: %s\n", codigo_carta1);

    printf("Nome da Cidade: %s\n", nome_cidade1);

    printf("População: %ld\n", populacao1);

    printf("Área: %.2f km²\n", area_cidade1);

    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    //imprimido carta 2
    printf("\n--- Carta 2 ---\n");

    printf("Estado: %s\n", estado2);

    printf("Código: %s\n", codigo_carta2); 

    printf("Nome da Cidade: %s\n", nome_cidade2);

    printf("População: %ld\n", populacao2);

    printf("Área: %.2f km²\n", area_cidade2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
