#include <stdio.h>

int main() {
    char codigo1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char codigo2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("=== Cadastro das Cartas Super Trunfo - Nivel Novato ===\n\n");

    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    printf("Digite o codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("Carta %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
