#include <stdio.h>

int main() {
//variaveis da carta 1 e 2 
  char Estado[20], Codigo[20], Cidade[20], Estado2[20], Codigo2[20], Cidade2[20];
  int Populacao, Populacao2, Turistico, Turistico2;
  float Area, PIB, Area2, PIB2;
  float DensidadeP, PIB_capital;
  float DensidadeP2, PIB_capital2;

printf("Carta 1: \n");

printf("Dígite o seu estado: \n");
scanf(" %s" , Estado);

printf("Dígite o seu código: \n");
scanf(" %s" , Codigo);

printf("Dígite a sua cidade:(use _ no lugar do espaço) \n");
scanf(" %s" , Cidade);

printf("Dígite a sua população: \n");
scanf("%d" , &Populacao);

printf("Dígite a sua área: \n");
scanf(" %f", &Area);

printf("Dígite o seu pib em bilhões de reais: \n");
scanf(" %f", &PIB);

printf("Dígite o seu ponto turístico: \n");
scanf(" %d", &Turistico);

//calculo da carta 1 
 DensidadeP = (float)Populacao / Area;
 PIB_capital = PIB / (float)Populacao;

printf("Carta 2: \n");

printf("Dígite o seu estado: \n");
scanf(" %s" , Estado2);

printf("Dígite o seu código: \n");
scanf(" %s" , Codigo2);

printf("Dígite a sua cidade:(use _ no lugar do espaço) \n");
scanf(" %s" , Cidade2);

printf("Dígite a sua população: \n");
scanf(" %d" , &Populacao2);

printf("Dígite a sua área: \n");
scanf(" %f", &Area2);

printf("Dígite o seu pib em bilhões de reais: \n");
scanf(" %f", &PIB2);

printf("Dígite o seu ponto turístico: \n");
scanf(" %d", &Turistico2);

//calculo da carta 2
 DensidadeP2 = (float)Populacao2 / Area2;
 PIB_capital2 = PIB2 / (float)Populacao2;

  // Área para exibição da carta 1
printf("estado: %s - código: %s\n", Estado, Codigo);
printf("cidade: %s - população: %d\n", Cidade, Populacao);
printf("área: %.2f km² - PIB: %.2f bilhões de reais\n", Area, PIB);
printf("número de pontos turisticos: %d\n", Turistico);
printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP);
printf("PIB per Capita: %.2f R$\n", PIB_capital);

// Área para exibição da carta 2
printf("estado: %s - código: %s\n", Estado2, Codigo2);
printf("cidade: %s - população: %d\n", Cidade2, Populacao2);
printf("área: %.2f km² - PIB: %.2f bilhões de reais\n", Area2, PIB2);
printf("número de pontos turisticos: %d", Turistico2);
printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP2);
printf("PIB per Capita: %.2f R$\n", PIB_capital2);

return 0;
} 
