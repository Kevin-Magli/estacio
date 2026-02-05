#include <stdio.h>
#include <string.h>

int main(){

    char estado1, cidade1[30], codigo1[3], codigo_estado1[4];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char estado2, cidade2[30], codigo2[3], codigo_estado2[4];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("\nQual é o a letra do estado da carta? (A - H) -> ");
    scanf("%c", &estado1);
    
    printf("\nQual é o codigo da carta? (ex: 01) -> ");
    scanf("%s", &codigo1);
    sprintf(codigo_estado1, "%c%s", estado1, codigo1);

    printf("\nQual é o nome da cidade? -> ");
    scanf(" %[^\n]", cidade1);
    
    printf("\nQual é a população da cidade? -> ");
    scanf("%d", &populacao1);
    
    printf("\nQual é a Área dessa cidade? (em km²) -> ");
    scanf("%f", &area1);
    
    printf("\nQual é o PIB da cidade? -> ");
    scanf("%f", &pib1);
    
    printf("\nQual é a quantidade de pontos turisticos na cidade? -> ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNumero de Pontos Turísticos: %d\n", estado1, codigo_estado1, cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("\nQual é o a letra do estado da carta 2? (A - H) -> ");
    scanf(" %c", &estado2);
    
    printf("\nQual é o codigo da carta 2? (ex: 01) -> ");
    scanf("%s", &codigo2);
    sprintf(codigo_estado2, "%c%s", estado2, codigo2);

    printf("\nQual é o nome da cidade 2? -> ");
    scanf(" %[^\n]", cidade2);
    
    printf("\nQual é a população da cidade 2? -> ");
    scanf("%d", &populacao2);
    
    printf("\nQual é a Área dessa cidade 2? (em km²) -> ");
    scanf("%f", &area2);
    
    printf("\nQual é o PIB da cidade 2? -> ");
    scanf("%f", &pib2);
    
    printf("\nQual é a quantidade de pontos turisticos na cidade 2? -> ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNumero de Pontos Turísticos: %d\n", estado2, codigo_estado2, cidade2, populacao2, area2, pib2, pontos_turisticos2);
}