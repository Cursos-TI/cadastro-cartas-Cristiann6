#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char Estado[20];
  char Codigo[20];
  char Cidade[20];
  int Populacão;
  float Area;
  float PIB;
  int Turistico;

  // Área para entrada de dados
printf("Carta 1:");

printf("Dígite o seu estado; \n");
scanf("%c, &Estado");

printf("Dígite o seu código; \n");
scanf("%c, &Codigo");

printf("Dígite a sua cidade; \n");
scanf("%c, &Cidade");

printf("Dígite a população; \n");
scanf("%d, &Populacao");

printf("Dígite a sua área; \n");
scanf("%e, &Area");

printf("Dígite o seu pib; \n");
scanf("%f, &PIB");

printf("Dígite o seu ponto turístico; \n");
scanf("%f, &Turistico");

  // Área para exibição dos dados da cidade

return 0;
} 
