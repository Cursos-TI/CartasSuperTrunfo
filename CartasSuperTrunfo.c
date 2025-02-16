#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade[5];
  float populacao;
  char area[10];
  char pib[20];
  int pontos_turisticos;

  // Área para entrada de dados
  printf("SUPER TRUNFO\n");

  printf("Qual é o código da cidade? (Ex.: A01)\n");
  scanf("%s", cidade);

  printf("Qual é a população?\n");
  scanf("%f", &populacao);

  // Limpa o buffer de entrada antes de ler uma string
  while (getchar() != '\n');

  printf("Qual é a área?\n");
  scanf("%s", area);

  // Limpa o buffer de entrada novamente
  while (getchar() != '\n');

  printf("Qual é o PIB?\n");
  scanf("%[^\n]", pib);  // Lê uma linha inteira, incluindo espaços

  printf("Quantos pontos turísticos possui?\n");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\n--- Dados da Cidade ---\n");
  printf("Cidade: %s\n", cidade);
  printf("População: %.2f\n", populacao);
  printf("Área: %s\n", area);
  printf("PIB: %s\n", pib);
  printf("Pontos Turísticos: %d\n", pontos_turisticos);

  return 0;
}
