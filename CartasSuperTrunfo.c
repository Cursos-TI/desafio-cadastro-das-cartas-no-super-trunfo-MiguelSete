#include <stdio.h>

// Programa Super Trunfo - Nível Mestre
int main() {
    // Declaração das variáveis
    char Estado1[10], Estado2[10];
    char NomeDaCidade1[20], NomeDaCidade2[20];
    char CodigoCarta1[5], CodigoCarta2[5];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBPerCapita1, PIBPerCapita2;
    float SuperPoder1, SuperPoder2;
    int pontosJogador1 = 0, pontosJogador2 = 0;
    int escolha, i;

    // Entrada da Carta 1
    printf("Digite o nome do Estado1:\n");
    scanf("%s", Estado1);
    printf("Digite o codigo da carta1:\n");
    scanf("%s", CodigoCarta1);
    printf("Digite o nome da Cidade1:\n");
    scanf("%s", NomeDaCidade1);
    printf("Digite a Populacao1:\n");
    scanf("%lu", &Populacao1);
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
    scanf("%lu", &Populacao2);
    printf("Digite a Area em KM2:\n");
    scanf("%f", &Area2);
    printf("Digite o PIB2:\n");
    scanf("%f", &PIB2);
    printf("Digite o numero de pontos turisticos2:\n");
    scanf("%d", &PontosTuristicos2);

    // Cálculos
    DensidadePopulacional1 = Populacao1 / Area1;
    PIBPerCapita1 = PIB1 / Populacao1;

    DensidadePopulacional2 = Populacao2 / Area2;
    PIBPerCapita2 = PIB2 / Populacao2;

    // Cálculo do Super Poder
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1.0 / DensidadePopulacional1);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1.0 / DensidadePopulacional2);

    // Saída organizada dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Menu de atributos
    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    // Rodadas de comparação
    for (i = 1; i <= 3; i++) {
        printf("\nRodada %d - Escolha um atributo (1 a 7): ", i);
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                if (Populacao1 > Populacao2) pontosJogador1++;
                else if (Populacao2 > Populacao1) pontosJogador2++;
                break;
            case 2:
                if (Area1 > Area2) pontosJogador1++;
                else if (Area2 > Area1) pontosJogador2++;
                break;
            case 3:
                if (PIB1 > PIB2) pontosJogador1++;
                else if (PIB2 > PIB1) pontosJogador2++;
                break;
            case 4:
                if (PontosTuristicos1 > PontosTuristicos2) pontosJogador1++;
                else if (PontosTuristicos2 > PontosTuristicos1) pontosJogador2++;
                break;
            case 5:
                if (DensidadePopulacional1 < DensidadePopulacional2) pontosJogador1++;
                else if (DensidadePopulacional2 < DensidadePopulacional1) pontosJogador2++;
                break;
            case 6:
                if (PIBPerCapita1 > PIBPerCapita2) pontosJogador1++;
                else if (PIBPerCapita2 > PIBPerCapita1) pontosJogador2++;
                break;
            case 7:
                if (SuperPoder1 > SuperPoder2) pontosJogador1++;
                else if (SuperPoder2 > SuperPoder1) pontosJogador2++;
                break;
            default:
                printf("Atributo inválido! Nenhum ponto atribuído nesta rodada.\n");
        }
    }

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    printf("Pontos Jogador 1: %d\n", pontosJogador1);
    printf("Pontos Jogador 2: %d\n", pontosJogador2);

    if (pontosJogador1 > pontosJogador2) {
        printf("Jogador 1 venceu o duelo!\n");
    } else if (pontosJogador2 > pontosJogador1) {
        printf("Jogador 2 venceu o duelo!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
