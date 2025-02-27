#include <stdio.h>

int main() {
    // Variáveis usadas no programa
    char estado1[30], estado2[30], cidade1[30], cidade2[30];
    int turistico1, turistico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, dens1, dens2, ppc1, ppc2, sp1, sp2;

    // Cabeçalho para o Jogo Super Trunfo (Fazendo uma graça)
    printf("-------------------------------------\n");
    printf("          Cartas S. Trunfo\n");
    printf("-------------------------------------\n");

    // Cadastro das informações da Carta 01
    printf("\nCarta 1:\n");

     /* 
      Solicita a cidade usando fgets para ler até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final, 
      tive que procurar outra saida na internet para conseguir ler toda a linha e não levar lixo para a próxima.
    */
    printf("Escreva o Estado Abreviado (XX):\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    // Mostra o código junto com o Estado
    printf("Código: %s (01)\n", estado1);

    /* 
      Solicita a cidade usando fgets para ler até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final, 
      tive que procurar outra saida na internet para conseguir ler toda a linha e não levar lixo para a próxima.
    */
    printf("Escreva a Cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    
    // Solicita a população e armazena na variavel população
    printf("Escreva a Populacao:\n");
    scanf(" %lu", &populacao1);

    // Solicita a área e armazena na variavel area
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area1);

    // Solicita o PIB e armazena na variavel pib
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%f", &pib1);

    // Solicita a quantidade de pontos turísticos e armazena na variavel Turistico
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico1);

    // Variaveis para o Nivel Aventureiro
    dens1 = (float) populacao1 / area1;
    ppc1 = (float) pib1 / populacao1;

    // Variaveis para o Nivel Mestre
    sp1 = populacao1 + area1 + pib1 + turistico1 + ppc1 + (1 / dens1);

    // Limpeza
    getchar();

    // Cadastro das informações da Carta 01
    printf("\nCarta 2:\n");

    /* 
      Solicita a cidade usando fgets para ler até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final, 
      tive que procurar outra saida na internet para conseguir ler toda a linha e não levar lixo para a próxima.
    */
    printf("Escreva o Estado Abreviado (XX):\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    // Mostra o código junto com o Estado
    printf("Código: %s (02)\n", estado2);

    // Solicita a cidade usando fgets para le	qr até o final, pois quando usei o Scanf ao colocar "São Paulo" ele não lia até o final.
    printf("Escreva a Cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    // Solicita a população e armazena na variavel população
    printf("Escreva a Populacao:\n");
    scanf("%lu", &populacao2);

    // Solicita a área e armazena na variavel area
    printf("Escreva Area (Km²):\n");
    scanf("%f", &area2);

    // Solicita o PIB e armazena na variavel pib
    printf("Escreva o PIB (Em Bilhões):\n");
    scanf("%f", &pib2);

    // Solicita a quantidade de pontos turísticos e armazena na variavel Turistico
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico2);

    // Variavies para o Nivel Aventureiro
    dens2 = (float) populacao2 / area2;
    ppc2 = (float) pib2 / populacao2;

    // Variavies para o Nivel Mestre
    sp2 = populacao2 + area2 + pib2 + turistico2 + ppc2 + (1 / dens2);
   
    // Limpeza
    getchar();

    // Imprime os dados para cabeçalho para Comparações das cartas
    printf("\n\n-------------------------------------\n");
    printf("  Comparação das Cartas (01) e (02) \n");
    printf("-------------------------------------\n\n");

    // Estrutura composta para verificar qual carta venceu
    if (populacao1 > populacao2) {
        printf("    Carta 1 - %s (%s) - População: %.2ld\n", cidade1, estado1, populacao1);
        printf("    Carta 2 - %s (%s) - População: %.2ld\n", cidade2, estado2, populacao2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - População: %.2ld\n", cidade2, estado2, populacao2);
        printf("    Carta 1 - %s (%s) - População: %.2ld\n", cidade1, estado1, populacao1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    } if (area1 > area2) {
        printf("    Carta 1 - %s (%s) - Área: %.2f\n", cidade1, estado1, area1);
        printf("    Carta 2 - %s (%s) - Área: %.2f\n", cidade2, estado2, area2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - Área: %.2f\n", cidade2, estado2, area2);
        printf("    Carta 1 - %s (%s) - Área: %.2f\n", cidade1, estado1, area1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    } if (pib1 > pib2) {
        printf("    Carta 1 - %s (%s) - PIB: %.2f\n", cidade1, estado1, pib1);
        printf("    Carta 2 - %s (%s) - PIB: %.2f\n", cidade2, estado2, pib2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - PIB: %.2f\n", cidade2, estado2, pib2);
        printf("    Carta 1 - %s (%s) - PIB: %.2f\n", cidade1, estado1, pib1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    } if (turistico1 > turistico2) {
        printf("    Carta 1 - %s (%s) - Pontos Turisticos: %d\n", cidade1, estado1, turistico1);
        printf("    Carta 2 - %s (%s) - Pontos Turisticos: %d\n", cidade2, estado2, turistico2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - Pontos Turisticos: %d\n", cidade2, estado2, turistico2);
        printf("    Carta 1 - %s (%s) - Pontos Turisticos: %d\n", cidade1, estado1, turistico1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    } if (dens1 > dens2) {
        printf("    Carta 1 - %s (%s) - Densidade Populacional: %.2f\n", cidade1, estado1, dens1);
        printf("    Carta 2 - %s (%s) - Densidade Populacional: %.2f\n", cidade2, estado2, dens2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - Densidade Populacional: %.2f\n", cidade2, estado2, dens2);
        printf("    Carta 1 - %s (%s) - Densidade Populacional: %.2f\n", cidade1, estado1, dens1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    } if (ppc1 > ppc2) {
        printf("    Carta 1 - %s (%s) - PIB per Capita: %.2f\n", cidade1, estado1, ppc1);
        printf("    Carta 2 - %s (%s) - PIB per Capita: %.2f\n", cidade2, estado2, ppc2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - PIB per Capita: %.2f\n", cidade2, estado2, ppc2);
        printf("    Carta 1 - %s (%s) - PIB per Capita: %.2f\n", cidade1, estado1, ppc1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    } if (sp1 > sp2) {
        printf("    Carta 1 - %s %s: %.2f\n", cidade1, estado1, sp1);
        printf("    Carta 2 - %s %s: %.2f\n", cidade2, estado2, sp2);
        printf(" ***Carta 1 - %s Venceu!***\n\n", cidade1);
    } else {
        printf("    Carta 2 - %s (%s) - Super Poder: %.2f\n", cidade2, estado2, sp2);
        printf("    Carta 1 - %s (%s) - Super Poder: %.2f\n", cidade1, estado1, sp1);
        printf(" ***Carta 2 - %s Venceu!***\n\n", cidade2);
    }

    return 0;
}
