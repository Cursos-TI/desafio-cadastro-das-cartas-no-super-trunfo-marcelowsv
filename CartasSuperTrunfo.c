#include <stdio.h>


int main(){

    char estado1[20], estado2[20];
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[20], nome_cidade2[20];
    int populaçao1, populaçao2;
    float area_cidade1, area_cidade2;
    float pib1, pib2;
    int pontos_turisticos1,pontos_turisticos2;
    /*char codigo1 = estado1,codigo_carta1[], codigo2 = estado2+codigo_carta2;*/

 
    printf("BEM VINDO AO SUPER TRUNFO\n\n");


/*dados carta 1*/
    printf("VAMOS REGISTRAR A 1° CIDADE\n\n");
    printf("Escolha seu estado, Digite uma letra de A a H:\n");
    scanf("%s", &estado1);

    printf("Escolha um número entre 01 e 04:\n");
    scanf("%s", &codigo_carta1);

    printf("Escolha a cidade:\n");
    scanf("%s", &nome_cidade1);

    printf("Quantos habitantes tem essa cidade?\n");
    scanf("%d", &populaçao1);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem na cidade:\n");
    scanf("%d", &pontos_turisticos1);


/*dados carta 2*/
    printf("\nAGORA VAMOS REGISTRAR A 2° CIDADE\n");

    printf("Escolha seu estado, Digite uma letra de A a H:\n");
    scanf("%s", &estado2);

    printf("Escolha um número entre 01 e 04:\n");
    scanf("%s", &codigo_carta2);

    printf("Escolha a cidade:\n");
    scanf("%s", &nome_cidade2);

    printf("Quantos habitantes tem essa cidade?\n");
    scanf("%d", &populaçao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem na cidade:\n");
    scanf("%d", &pontos_turisticos2);

/*imprimindo as cartas*/
    printf("\nCARTA 1: \n cidade: %s \n Estado: %s \n codigo da cidade:  \n População: %d \n Área da cidade %.2fKm² \n PIB da cidade: %f \n Números de pontos turísticos: %d \n ",nome_cidade1, estado1, populaçao1, area_cidade1, pib1, pontos_turisticos1 );
    printf("codigo da cidade: %s%s\n", estado1,codigo_carta1);

    printf("\nCARTA 2: \n cidade: %s \n Estado: %s \n codigo da cidade:  \n População: %d \n Área da cidade %.2fKm² \n PIB da cidade: %f \n Números de pontos turísticos: %d \n ",nome_cidade2, estado2, populaçao2, area_cidade2, pib2, pontos_turisticos2);
    printf("codigo da cidade: %s%s\n", estado2,codigo_carta2);



    return 0;
}
