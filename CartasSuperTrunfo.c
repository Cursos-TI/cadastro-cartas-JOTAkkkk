#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
//Carta :Estado,Código, Nome da Cidade, População, Área, PIB,Número de Pontos Turísticos.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado[50], cidade[50], codigo[50], estado2[50], cidade2[50], codigo2[50];
  float area, pib, area2, pib2;  
  int populaçao, turisticos, populaçao2, turisticos2;

  // Área para entrada de dados

  //CARTA1
  printf("Digite o código da carta 1:\n");
    scanf("%s", codigo);
  printf("Digite a cidade da carta 1:\n");
    scanf(" %49[^\n]", cidade);
    scanf(" %49[^\n]", cidade);
  printf("Digite o estado da carta 1:\n");
    scanf(" %49[^\n]", estado);
    scanf(" %49[^\n]", estado);
  printf("Digite a população da carta 1:\n");
    scanf("%d", &populaçao);
  printf("Digite o PIB da carta 1:\n");
    scanf("%f", &pib);
  printf("Digite a area em Km quadrados da carta 1:\n");
    scanf("%f", &area);  
  printf("Digite o numero de pontos turisticos da carta 1:\n");
    scanf("%d", &turisticos);      

  float densidade1 = populaçao / area;
  float percapita1 = pib / populaçao;

  //CARTA2
  printf("Digite o código da carta 2:\n");
    scanf("%s", codigo2);
  printf("Digite a cidade da carta 2:\n");
    scanf(" %99[^\n]", cidade2);
  printf("Digite o estado da carta 2:\n");
    scanf(" %99[^\n]", estado2);
  printf("Digite a população da carta 2:\n");
    scanf("%d", &populaçao2);
  printf("Digite o PIB da carta 2:\n");
    scanf("%f", &pib2);
  printf("Digite a area em Km quadrados da carta 2:\n");
    scanf("%f", &area2);  
  printf("Digite o numero de pontos turisticos da carta 2:\n");
    scanf("%d", &turisticos2);
  printf("\n");

  float densidade2 = populaçao2 / area2;
  float percapita2 = pib2 / populaçao2;

  // Área para exibição dos dados da cidade

  //CARTA1
  printf("CARTA 1\n");
  printf("CÓDIGO: %s.\n", codigo);
  printf("ESTADO: %s.\n", estado);
  printf("NOME DA CIDADE: %s.\n", cidade);
  printf("POPULAÇÃO: %d habitantes.\n", populaçao);
  printf("ÁREA: %.2f km².\n", area);
  printf("PIB: %.2f de reais.\n", pib);
  printf("NUMERO DE PONTOS TURISTICOS: %d.\n", turisticos);
  printf("DENSIDADE DEMOGRÁFICA: %.2f habitantes por km².\n", densidade1);
  printf("PIB PER CAPITA: %.2f reais por habitante.\n", percapita1);
  printf("\n");

  //CARTA2
  printf("CARTA 2\n");
  printf("CÓDIGO: %s.\n", codigo2);
  printf("ESTADO: %s.\n", estado2);
  printf("NOME DA CIDADE: %s.\n", cidade2);
  printf("POPULAÇÃO: %d habitantes.\n", populaçao2);
  printf("ÁREA: %.2f km².\n", area2);
  printf("PIB: %.2f de reais.\n", pib2);
  printf("DENSIDADE DEMOGRÁFICA: %.2f habitantes por km².\n", densidade2);
  printf("PIB PER CAPITA: %.2f reais por habitante.\n", percapita2);
  printf("NUMERO DE PONTOS TURISTICOS: %d.\n", turisticos2);


return 0;
} 
