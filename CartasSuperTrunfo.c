#include <stdio.h>

int main() {

    // Desafio Super Trunfo
    // Nível: Aventureiro

    //Variáveis
    char Estado[30];
    char Codigo[3];
    char Cidade[50];
    int Populacao;
    float AreaKm2;
    float PIB;
    int PontosTuristicos;
    float DensidadePopulacional;
    float PibPercapta;

    //Entrada de dados

    //Carta 01 Estado A
    printf("Digite o nome do estado: \n");
    scanf("%s", Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area em Km2: \n");
    scanf("%f", &AreaKm2);

    printf("Digite o PIB em R$: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &PontosTuristicos);


    // Cálculos
    DensidadePopulacional = Populacao / AreaKm2;
    PibPercapta = PIB / Populacao;

    //Saída de Dados:
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area em Km2: %f\n", AreaKm2);
    printf("PIB em R$: %f\n", PIB);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB per capita: %.2f\n", PibPercapta);



    //Carta 02 Estado B
    printf("Digite o nome do estado: \n");
    scanf("%s", Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area em Km2: \n");
    scanf("%f", &AreaKm2);

    printf("Digite o PIB em R$: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &PontosTuristicos);

    // Cálculos
    DensidadePopulacional = Populacao / AreaKm2;
    PibPercapta = PIB / Populacao;

    //Saída de Dados:
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area em Km2: %f\n", AreaKm2);
    printf("PIB em R$: %f\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB per capita: %.2f\n", PibPercapta);

    return 0;
}
