#include <stdio.h>

int main (){
   printf("Desafio Super Trunfo \n");

   int PontosTuristicos;
   char NomeCidade1[30], NomeCidade2[30];
   char Codigo1[3], Codigo2[3];
   char Estado1[24], Estado2[25];
   float Area1, Area2;
   float PIB1, PIB2;
   float Populacao1, Populacao2;
   float Densidade1, Densidade2;
   float PerCapita1, PerCapita2;

  // CARTA 1

   printf("Carta1\n");
   printf("Digite o estado:\n");
   scanf("%23s", Estado1);
   
   printf("Digite o código:\n");
   scanf("%2s", Codigo1);

   printf("Digite o nome da cidade:\n");
   scanf("%29s", NomeCidade1);

   printf("Digite a população:\n");
   scanf("%f", &Populacao1);

   printf("Digite a Área(km²):\n");
   scanf("%f", &Area1);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB1);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &PontosTuristicos);

   printf("Carta1\n");
   printf("Estado: %s\n", Estado1);
   printf("Código: %s\n", Codigo1);
   printf("Nome da cidade: %s\n", NomeCidade1);
   printf("População: %f\n", Populacao1);
   printf("Área: %.2f (km²)\n", Area1);
   printf("PIB: %.2f\n", PIB1);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos);

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
   scanf("%f", &Populacao2);

   printf("Digite a Área(km²):\n");
   scanf("%f", &Area2);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB2);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &PontosTuristicos);

   printf("Carta2\n");
   printf("Estado: %s\n", Estado2);
   printf("Código: %s\n", Codigo2);
   printf("Nome da cidade: %s\n", NomeCidade2);
   printf("População: %f\n", Populacao2);
   printf("Área: %.2f (km²)\n", Area2); // por conta das restrições atribuidas a esta atividade, o resultado de printf("Área: %.2f...") irá exibir, EX: Área 123456.00 (km²) ao invés de 1234.56 (km²)  
   printf("PIB: %.2f\n", PIB2);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos);
 
   Densidade1 = (float) (Populacao1 / Area1);
   printf ("A densidade populacional da carta 1 é: %.2f km²\n", Densidade1);

   Densidade2 = (float) (Populacao2 / Area2);
   printf ("A densidade Populacao da carta 2 é: %.2f km²\n", Densidade2);

   if (Densidade1 < Densidade2){
    printf("A carta 1 venceu");
  }else{
    printf("A carta 2 venceu");
  }

  printf("\n");

  PerCapita1 = (float) (PIB1 / Populacao1);
  printf ("A PIB per capita da carta 1 é: %.2f\n", PerCapita1);

  PerCapita2 = (float) (PIB2 / Populacao2);
  printf ("O PIB per capita da carta 2 é: %.2f\n", PerCapita2);
 
  if (PerCapita1 > PerCapita2){
    printf ("A carta 1 venceu");
  }else{
    printf ("A carta 2 venceu");
  }

  return 0;
}