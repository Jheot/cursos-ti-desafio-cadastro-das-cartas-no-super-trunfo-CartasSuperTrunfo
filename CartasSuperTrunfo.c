#include <stdio.h>

int main (){
   printf("Desafio Super Trunfo \n"); // Não utilizar acentuações como ',' ou '.' para evitar problemas

   int PontosTuristicos1, PontosTuristicos2;
   char NomeCidade1[30], NomeCidade2[30];
   char Codigo1[3], Codigo2[3];
   char Estado1[24], Estado2[25];
   float Area1, Area2;
   float PIB1, PIB2;
   unsigned long int Populacao1, Populacao2;
   float Densidade1, Densidade2;
   float PerCapita1, PerCapita2;
   float SuperPoder1, SuperPoder2;

  // CARTA 1

   printf("Carta1\n");
   printf("Digite o estado:\n");
   scanf("%23s", Estado1);
   
   printf("Digite o código:\n");
   scanf("%2s", Codigo1);

   printf("Digite o nome da cidade:\n");
   scanf("%29s", NomeCidade1);

   printf("Digite a população:\n");
   scanf("%lu", &Populacao1);

   printf("Digite a Área(km²):\n");
   scanf("%f", &Area1);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB1);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &PontosTuristicos1);

   printf("Carta1\n");
   printf("Estado: %s\n", Estado1);
   printf("Código: %s\n", Codigo1);
   printf("Nome da cidade: %s\n", NomeCidade1);
   printf("População: %lu\n", Populacao1);
   printf("Área: %.2f (km²)\n", Area1);
   printf("PIB: %.2f\n", PIB1);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos1);

   printf("\n");

   //CARTA 2

   printf("Carta2\n");
   printf("Digite o estado:\n");
   scanf(" %24s", Estado2); 
   
   printf("Digite o código:\n");
   scanf("%2s", Codigo2);

   printf("Digite o nome da cidade:\n");
   scanf("%29s", NomeCidade2);

   printf("Digite a população:\n");
   scanf("%lu", &Populacao2);

   printf("Digite a Área(km²):\n");
   scanf("%f", &Area2);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB2);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &PontosTuristicos2);

   printf("Carta2\n");
   printf("Estado: %s\n", Estado2);
   printf("Código: %s\n", Codigo2);
   printf("Nome da cidade: %s\n", NomeCidade2);
   printf("População: %f\n", Populacao2);
   printf("Área: %.2f (km²)\n", Area2); // por conta das restrições atribuidas a esta atividade, o resultado de printf("Área: %.2f...") irá exibir, EX: Área 123456.00 (km²) ao invés de 1234.56 (km²)  
   printf("PIB: %.2f\n", PIB2);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
 
   Densidade1 = (float) (Populacao1 / Area1);
   printf ("A densidade populacional da carta 1 é: %.2f km²\n", Densidade1);

   Densidade2 = (float) (Populacao2 / Area2);
   printf ("A densidade Populacao da carta 2 é: %.2f km²\n", Densidade2);

   printf("\n");

  PerCapita1 = (float) (PIB1 / Populacao1);
  printf ("A PIB per capita da carta 1 é: %.2f\n", PerCapita1);

  PerCapita2 = (float) (PIB2 / Populacao2);
  printf ("O PIB per capita da carta 2 é: %.2f\n", PerCapita2);

  if (PerCapita1 > PerCapita2){
    printf("Carta 1 venceu");
  }else{
    printf("Carta 2 venceu");
  }

  SuperPoder1 = (float) (Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PerCapita1 + Densidade1);
  printf ("O Super Poder da carta 1 equivale a: %.3f\n",SuperPoder1);

  SuperPoder2 = (float) (Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PerCapita2 + Densidade2);
  printf ("O Super Poder da carta 2 equivale a: %3.f\n",SuperPoder2);

  printf("***Quem é o vencedor?***\n");



  return 0;
}