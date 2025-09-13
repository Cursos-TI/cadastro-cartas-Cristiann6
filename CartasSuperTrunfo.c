#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
//variaveis da carta 1
  char Estado[20], Codigo[20], Cidade[20];
  int Populacao;
  float Area;
  float PIB;
  int Turistico;

  //variaveis da carta 2
  char Estado2[20], Codigo2[20], Cidade2[20];
  int Populacao2;
  float Area2;
  float PIB2;
  int Turistico2;


printf("Carta 1: \n");

printf("Dígite o seu estado: \n");
scanf("%s" , Estado);

printf("Dígite o seu código: \n");
scanf("%s" , Codigo);

printf("Dígite a sua cidade: \n");
scanf("%s" , Cidade);

printf("Dígite a sua população: \n");
scanf("%d" , &Populacao);

printf("Dígite a sua área: \n");
scanf("%f", &Area);

printf("Dígite o seu pib: \n");
scanf("%f", &PIB);

printf("Dígite o seu ponto turístico: \n");
scanf("%d", &Turistico);

printf("Carta 2: \n");

printf("Dígite o seu estado: \n");
scanf("%s" , Estado2);

printf("Dígite o seu código: \n");
scanf("%s" , Codigo2);

printf("Dígite a sua cidade: \n");
scanf("%s" , Cidade2);

printf("Dígite a sua população: \n");
scanf("%d" , &Populacao2);

printf("Dígite a sua área: \n");
scanf("%f", &Area2);

printf("Dígite o seu pib: \n");
scanf("%f", &PIB2);

printf("Dígite o seu ponto turístico: \n");
scanf("%d", &Turistico2);

  // Área para exibição da carta 1
printf("estado: %s - código: %s\n", Estado, Codigo);
printf("cidade: %s - população: %d\n", Cidade, Populacao);
printf("área: %f - pib: %f\n", Area, PIB);
printf("número de pontos turisticos: %d", Turistico);

// Área para exibição da carta 2
printf("estado: %s - código: %s\n", Estado2, Codigo2);
printf("cidade: %s - população: %d\n", Cidade2, Populacao2);
printf("área: %f - pib: %f\n", Area2, PIB2);
printf("número de pontos turisticos: %d", Turistico2);

return 0;
} 
