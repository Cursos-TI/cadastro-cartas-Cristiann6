#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char Estado[20], Codigo[20], Cidade[20];
  int Populacao;
  float Area;
  float PIB;
  int Turistico;


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

  // Área para exibição dos dados da cidade
printf("estado: %s - código: %s\n", Estado, Codigo);
printf("cidade: %s - população: %d\n", Cidade, Populacao);
printf("área: %f - pib: %f\n", Area, PIB);
printf("número de pontos turisticos: %d", Turistico);

return 0;
} 
