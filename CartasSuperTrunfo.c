#include <stdio.h>

// Variaveis
int main() {
    char Estado1[10], Estado2[10];
    char NomeDaCidade1[20], NomeDaCidade2[20];
    char CodigoCarta1[5], CodigoCarta2[5];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

    // Entrada da Carta 1
    printf("Digite o nome do Estado1:\n");
    scanf("%s", Estado1);

    printf("Digite o codigo da carta1:\n");
    scanf("%s", CodigoCarta1);

    printf("Digite o nome da Cidade1:\n");
    scanf("%s", NomeDaCidade1);

    printf("Digite a Populacao1:\n");
    scanf("%d", &Populacao1);

    printf("Digite a Area em KM1:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB1:\n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos1:\n");
    scanf("%d", &PontosTuristicos1);

    // Entrada da Carta 2
    printf("Digite o nome do Estado2:\n");
    scanf("%s", Estado2);

    printf("Digite o codigo da carta2:\n");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da Cidade2:\n");
    scanf("%s", NomeDaCidade2);

    printf("Digite a Populacao2:\n");
    scanf("%d", &Populacao2);

    printf("Digite a Area em KM2:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB2:\n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos2:\n");
    scanf("%d", &PontosTuristicos2);

    // Saída organizada dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}
