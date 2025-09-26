#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Declarando as variáveis da carta
struct Carta
{
  char estado;
  char codigo[4];
  char nome_cidade[50];
  unsigned long int populacao;
  int pontos_turisticos;
  float densidade_p, super_poder, area, pib, pibpc, inverso_densidade;
};

int main()
{
  struct Carta carta1, carta2;
  printf("\n");

  // Usuário definindo os valores da Carta 1
  printf("---Cadastro da Primeira Carta---\n");

  printf("Estado (A-H): ");
  scanf(" %c", &carta1.estado);

  printf("Código da carta(01 - 04): ");
  scanf(" %s", carta1.codigo);

  printf("Nome da cidade: ");
  scanf(" %49[^\n]", carta1.nome_cidade);

  printf("População da cidade: ");
  scanf(" %lu", &carta1.populacao);

  printf("Area da cidade(Km2): ");
  scanf(" %f", &carta1.area);

  printf("PIB da cidade: ");
  scanf(" %f", &carta1.pib);

  printf("Número de pontos turísticos: ");
  scanf(" %d", &carta1.pontos_turisticos);

  carta1.densidade_p = (float)carta1.populacao / carta1.area;
  carta1.inverso_densidade = 1.0f / (float)carta1.densidade_p;
  carta1.pibpc = carta1.pib / (float)carta1.populacao;
  carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pibpc + carta1.inverso_densidade;

  // Imprimindo os valores definidos da carta1
  printf("Carta 1\n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %lu\n Densidade Populacional: %.2f\n Área: %.2fKm2\n PIB: %.2fBilhões de reais\n PIB per Capita: %.2f\nPontos turísticos: %d", carta1.estado, carta1.estado, carta1.codigo, carta1.nome_cidade, carta1.populacao, carta1.densidade_p, carta1.area, carta1.pib, carta1.pibpc, carta1.pontos_turisticos);

  // Usuário definindo os valores da Carta2
  printf("---Cadastro da Segunda Carta---\n");

  printf("Estado (A-H): ");
  scanf(" %c", &carta2.estado);

  printf("Código da carta(01 - 04): ");
  scanf(" %s", carta2.codigo);

  printf("Nome da cidade: ");
  scanf(" %49[^\n]", carta2.nome_cidade);

  printf("População da cidade: ");
  scanf(" %lu", &carta2.populacao);

  printf("Area da cidade(Km2): ");
  scanf(" %f", &carta2.area);

  printf("PIB da cidade: ");
  scanf(" %f", &carta2.pib);

  printf("Número de pontos turísticos: ");
  scanf(" %d", &carta2.pontos_turisticos);

  carta2.densidade_p = (float)carta2.populacao / carta2.area;
  carta2.inverso_densidade = 1.0f / (float)carta2.densidade_p;
  carta2.pibpc = carta2.pib / (float)carta2.populacao;
  carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pibpc + carta2.inverso_densidade;

  // Imprimindo os valores definidos da carta2
  printf("Carta 2\n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %lu\n Densidade Populacional: %.2f\n Área: %.2fKm2\n PIB: %.2fBilhões de reais\n PIB per Capita: %.2f\n Pontos turísticos: %d\n", carta2.estado, carta2.estado, carta2.codigo, carta2.nome_cidade, carta2.populacao, carta2.densidade_p, carta2.area, carta2.pib, carta2.pibpc, carta2.pontos_turisticos);
  printf("\n");
  // Exibindo o resultado da batalha
  printf("Batalha Super Trunfo\n");
  printf("(1) - Carta 1 Venceu\n(0) - Carta 2 Venceu\n");

  printf("\n--- Comparacao de Cartas ---\n");

  // Comparacao de cada atributo usando o operador ternário
  // (condicao ? "Carta 1 venceu" : "Carta 2 venceu")
  // (condicao ? 1 : 0)

  // Comparacao: Populacao (maior vence)
  printf("Populacao: %s venceu (%d)\n",
         carta1.populacao > carta2.populacao ? "Carta 1" : "Carta 2",
         carta1.populacao > carta2.populacao ? 1 : 0);

  // Comparacao: Area (maior vence)
  printf("Area: %s venceu (%d)\n",
         carta1.area > carta2.area ? "Carta 1" : "Carta 2",
         carta1.area > carta2.area ? 1 : 0);

  // Comparacao: PIB (maior vence)
  printf("PIB: %s venceu (%d)\n",
         carta1.pib > carta2.pib ? "Carta 1" : "Carta 2",
         carta1.pib > carta2.pib ? 1 : 0);

  // Comparacao: Pontos Turisticos (maior vence)
  printf("Pontos Turisticos: %s venceu (%d)\n",
         carta1.pontos_turisticos > carta2.pontos_turisticos ? "Carta 1" : "Carta 2",
         carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0);

  // Comparacao: Densidade Populacional (menor vence)
  printf("Densidade Populacional: %s venceu (%d)\n",
         carta1.densidade_p < carta2.densidade_p ? "Carta 1" : "Carta 2",
         carta1.densidade_p < carta2.densidade_p ? 1 : 0);

  // Comparacao: PIB per Capita (maior vence)
  printf("PIB per Capita: %s venceu (%d)\n",
         carta1.pibpc > carta2.pibpc ? "Carta 1" : "Carta 2",
         carta1.pibpc > carta2.pibpc ? 1 : 0);

  // Comparacao: Super Poder (maior vence)
  printf("Super Poder: %s venceu (%d)\n",
         carta1.super_poder > carta2.super_poder ? "Carta 1" : "Carta 2",
         carta1.super_poder > carta2.super_poder ? 1 : 0);

  return 0;
}
