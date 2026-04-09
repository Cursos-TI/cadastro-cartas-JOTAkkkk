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
  int game;
  int camparacao;
  char escolha2;

  // Menu

  printf("Digite 1 para jogar e 2 para sair\n");
  scanf("%d", &game);

  switch (game)
  {
  case 1:
    
  // Área para entrada de dados
  //CARTA1
  printf("Digite o código da carta 1:\n");
    scanf("%s", codigo);
  printf("Digite a cidade da carta 1:\n");
    scanf(" %49[^\n]", cidade); // Comando para ler uma string com espaços, limitando a leitura a 49 caracteres para evitar overflow
  printf("Digite o estado da carta 1:\n");
    scanf(" %49[^\n]", estado); // O espaço antes do %49[^\n] é para consumir o caractere de nova linha deixado pelo scanf anterior
  printf("Digite a população da carta 1:\n");
    scanf("%d", &populaçao);
  printf("Digite o PIB da carta 1:\n");
    scanf("%f", &pib);
  printf("Digite a area em Km quadrados da carta 1:\n");
    scanf("%f", &area);  
  printf("Digite o numero de pontos turisticos da carta 1:\n");
    scanf("%d", &turisticos);      

  // Cálculo da densidade demográfica e do PIB per capita para carta1  
  float densidade1 = populaçao / area; // Cálculo da densidade demográfica: população dividida pela área
  float percapita1 = pib / populaçao; // Cálculo do PIB per capita: PIB dividido pela população
  float superpoder = area + populaçao + pib + turisticos + percapita1 + (1 / densidade1); // Cálculo do super poder: soma de todas as propriedades da carta1

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

  // Cálculo da densidade demográfica e do PIB per capita para carta2
  float densidade2 = populaçao2 / area2;
  float percapita2 = pib2 / populaçao2;
  float superpoder2 = area2 + populaçao2 + pib2 + turisticos2 + percapita2 + (1 / densidade2); // Cálculo do super poder: soma de todas as propriedades da carta2
  // Área para exibição dos dados da cidade
  
  //CARTA1
  printf("CARTA 1\n");
  printf("ESTADO: %s.\n", estado);
  printf("CÓDIGO: %s.\n", codigo);
  printf("NOME DA CIDADE: %s.\n", cidade);
  printf("POPULAÇÃO: %d habitantes.\n", populaçao);
  printf("ÁREA: %.2f km².\n", area);
  printf("PIB: %.2f de reais.\n", pib);
  printf("NUMERO DE PONTOS TURISTICOS: %d.\n", turisticos);
  printf("DENSIDADE DEMOGRÁFICA: %.2f habitantes por km².\n", densidade1);
  printf("PIB PER CAPITA: %.2f reais por habitante.\n", percapita1);
  printf("SUPER PODER: %.2f.\n", superpoder);
  printf("\n"); 

  //CARTA2
  printf("CARTA 2\n");
  printf("ESTADO: %s.\n", estado2);
  printf("CÓDIGO: %s.\n", codigo2);
  printf("NOME DA CIDADE: %s.\n", cidade2);
  printf("POPULAÇÃO: %d habitantes.\n", populaçao2);
  printf("ÁREA: %.2f km².\n", area2);
  printf("PIB: %.2f de reais.\n", pib2);
  printf("DENSIDADE DEMOGRÁFICA: %.2f habitantes por km².\n", densidade2);
  printf("PIB PER CAPITA: %.2f reais por habitante.\n", percapita2);
  printf("NUMERO DE PONTOS TURISTICOS: %d.\n", turisticos2);
  printf("SUPER PODER: %.2f.\n", superpoder2);
  printf("\n");

      // ESCOLHA DE DOIS ATRIBUTOS
  int atributo1, atributo2;
  float valor1_c1 = 0, valor2_c1 = 0;
  float valor1_c2 = 0, valor2_c2 = 0;

  printf("Escolha o PRIMEIRO atributo:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  scanf("%d", &atributo1);

  printf("Escolha o SEGUNDO atributo:\n");
  scanf("%d", &atributo2);

  // CARTA 1
  switch (atributo1) {
    case 1: valor1_c1 = populaçao; break;
    case 2: valor1_c1 = area; break;
    case 3: valor1_c1 = pib; break;
    case 4: valor1_c1 = turisticos; break;
    case 5: valor1_c1 = densidade1; break;
    case 6: valor1_c1 = percapita1; break;
    case 7: valor1_c1 = superpoder; break;
  }

  switch (atributo2) {
    case 1: valor2_c1 = populaçao; break;
    case 2: valor2_c1 = area; break;
    case 3: valor2_c1 = pib; break;
    case 4: valor2_c1 = turisticos; break;
    case 5: valor2_c1 = densidade1; break;
    case 6: valor2_c1 = percapita1; break;
    case 7: valor2_c1 = superpoder; break;
  }

  // CARTA 2
  switch (atributo1) {
    case 1: valor1_c2 = populaçao2; break;
    case 2: valor1_c2 = area2; break;
    case 3: valor1_c2 = pib2; break;
    case 4: valor1_c2 = turisticos2; break;
    case 5: valor1_c2 = densidade2; break;
    case 6: valor1_c2 = percapita2; break;
    case 7: valor1_c2 = superpoder2; break;
  }

  switch (atributo2) {
    case 1: valor2_c2 = populaçao2; break;
    case 2: valor2_c2 = area2; break;
    case 3: valor2_c2 = pib2; break;
    case 4: valor2_c2 = turisticos2; break;
    case 5: valor2_c2 = densidade2; break;
    case 6: valor2_c2 = percapita2; break;
    case 7: valor2_c2 = superpoder2; break;
  }

  // AJUSTE: densidade (menor é melhor)
  if (atributo1 == 5) {
    valor1_c1 = 1 / densidade1;
    valor1_c2 = 1 / densidade2;
  }
  if (atributo2 == 5) {
    valor2_c1 = 1 / densidade1;
    valor2_c2 = 1 / densidade2;
  }

  // SOMA
  float soma1 = valor1_c1 + valor2_c1;
  float soma2 = valor1_c2 + valor2_c2;

  // RESULTADO
  printf("\nResultado da comparação:\n");
  printf("Soma Carta 1: %.2f\n", soma1);
  printf("Soma Carta 2: %.2f\n", soma2);

  (soma1 > soma2) ? printf("Carta 1 (%s) venceu!\n", cidade) : printf("Carta 2 (%s) venceu!\n", cidade2);
    break; 

        default:
    
        printf("Opção inválida. Encerrando o jogo.\n");
        break;
        }
    
      return 0;
    }
    