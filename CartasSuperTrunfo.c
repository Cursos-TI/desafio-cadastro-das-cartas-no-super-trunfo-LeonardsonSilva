#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

void quebra_linha() {
    printf("\n");
}

void verificar_vencedor(char titulo[], float a, float b) {
    printf("%s: ", titulo);
    if (a > b) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    quebra_linha();
}

int main() {
    char estado_1, estado_2;       // uma letra de A a H
    char codigo_1[4] = "", codigo_2[4] = ""; // A letra do estado seguida de um número de 01 a 04
    char cidade_1[81] = "", cidade_2[81] = "";
    unsigned long int populacao_1 = 0, populacao_2 = 0;
    float area_1 = 0.0, area_2 = 0.0;
    float PIB_1 = 0.0, PIB_2 = 0.0;
    int qtd_pontos_turisticos_1 = 0, qtd_pontos_turisticos_2 = 0;
    float densidade_populacional_1 = 0.0, densidade_populacional_2 = 0.0;
    float PIB_per_capita_1 = 0.0, PIB_per_capita_2 = 0.0;
    float super_poder_1 = 0.0, super_poder_2 = 0.0;

    printf("Estado 01 (uma letra de A a H): ");
    scanf(" %c", &estado_1);
    printf("Dígito identificador da Carta 01 (um número de 01 a 04): ");
    scanf("%s", codigo_1);
    printf("Nome da Cidade 01: ");
    scanf(" %[^\n]", cidade_1);
    printf("População 01: ");
    scanf("%lu", &populacao_1);
    printf("Área (km2) 01: ");
    scanf("%f", &area_1);
    printf("PIB 01 (em Bilhões de Reais): ");
    scanf("%f", &PIB_1);
    printf("Quantidade de Pontos Turísticos 01: ");
    scanf("%d", &qtd_pontos_turisticos_1);

    quebra_linha();

    printf("Estado 02 (uma letra de A a H): ");
    scanf(" %c", &estado_2);
    printf("Dígito identificador da Carta 02 (um número de 01 a 04):  ");
    scanf("%s", codigo_2);
    printf("Nome da Cidade 02: ");
    scanf(" %[^\n]", cidade_2);
    printf("População 02: ");
    scanf("%lu", &populacao_2);
    printf("Área (km2) 02: ");
    scanf("%f", &area_2);
    printf("PIB 02 (em Bilhõe de reais): ");
    scanf("%f", &PIB_2);
    printf("Quantidade de Pontos Turísticos 02: ");
    scanf("%d", &qtd_pontos_turisticos_2);

    densidade_populacional_1 = populacao_1 / area_1;
    PIB_per_capita_1 = PIB_1 * 1000000000 / populacao_1;
    super_poder_1 = populacao_1 + area_1 + PIB_1 + qtd_pontos_turisticos_1 + PIB_per_capita_1 - densidade_populacional_1;

    densidade_populacional_2 = populacao_2 / area_2;
    PIB_per_capita_2 = PIB_2 * 1000000000 / populacao_2;
    super_poder_2 = populacao_2 + area_2 + PIB_2 + qtd_pontos_turisticos_2 + PIB_per_capita_2 - densidade_populacional_2;

    quebra_linha();
    quebra_linha();

    printf("Comparação de Cartas:");
    quebra_linha();
    verificar_vencedor("População", populacao_1, populacao_2);
    verificar_vencedor("Área", area_1, area_2);
    verificar_vencedor("PIB", PIB_1, PIB_2);
    verificar_vencedor("Pontos Turísticos", qtd_pontos_turisticos_1, qtd_pontos_turisticos_2);
    verificar_vencedor("Densidade Populacional", densidade_populacional_1, densidade_populacional_2);
    verificar_vencedor("PIB per Capita", PIB_per_capita_1, PIB_per_capita_2);
    verificar_vencedor("Super Poder", super_poder_1, super_poder_2);

    quebra_linha();
    quebra_linha();

    return 0;
}
