#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");
  // variavescarta 1:
  int teste;
  char estado1;
  char codigo1[10];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  float pontos1;
  float dens_populacional1;
  float pib_per1;

  // variaves carta 2:
  int pessoa;
  char estado2;
  char codigo2[10];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  float pontos2;
  float dens_populacional2;
  float pib_per2;
  

  //entrada de dados carta 1:

  printf("carta 1:  \n\n");
    

  printf("Digite o estado:");
  scanf(" %s" ,&estado1);

  printf("Digite o codigo: ");
  scanf(" %s" ,codigo1);

  printf("Digite a cidade: ");
  scanf(" %s" ,cidade1);

  printf("Digite a população: ");
  scanf(" %d" ,&populacao1);

  printf("Digite a area: ");
  scanf(" %f",&area1);

  printf("Digite o PIB: ");
  scanf(" %f" ,&pib1);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%f" ,&pontos1);
  printf("\n\n");

  //entrada de dados carta 2:

  printf("carta 2:  \n\n");
    

  printf("Digite o estado:");
  scanf(" %s" ,&estado2);

  printf("Digite o codigo: ");
  scanf(" %s" ,codigo2);

  printf("Digite a cidade: ");
  scanf(" %s" ,cidade2);

  printf("Digite a população: ");
  scanf(" %d" ,&populacao2);

  printf("Digite a area: ");
  scanf(" %f",&area2);

  printf("Digite o PIB: ");
  scanf(" %f" ,&pib2);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%f" ,&pontos2);

  //calculo densidade populacional 1
  dens_populacional1 = populacao1 / area1;

  // calculo PIB per Capita 1
  pib_per1 = pib1 / populacao1;
  //saida de dados carta 1:

  printf("carta 1: \n\n");
  printf("estado: %c\n" ,estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n" ,cidade1);
  printf("População: %.2d\n" ,populacao1);
  printf("Área: %.2f km²\n " ,area1);
  printf("PIB: %.2f\n" ,pib1);
  printf("Densidade Popular: %.2f hab/km²\n", dens_populacional1);
  printf("PIB per Capita: %.3f Reais", pib_per1);
  printf("\n\n");


  //calculo densidade populacional 2
  dens_populacional2 = populacao2 / area2;

  // calculo PIB per Capita 2
  pib_per2 = pib2 / populacao2;


  //saida de dados carta 2:

  printf("carta 2: \n\n");
  printf("estado: %c\n" ,estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n" ,cidade2);
  printf("População: %.2d\n" ,populacao2);
  printf("Área: %.2f\n" ,area2);
  printf("PIB: %.2f\n" ,pib2);
  printf("Densidade Popular: %.2f hab/km²\n", dens_populacional2);
  printf("PIB per Capita: %.3f Reais", pib_per2);

  return 0;
} 
