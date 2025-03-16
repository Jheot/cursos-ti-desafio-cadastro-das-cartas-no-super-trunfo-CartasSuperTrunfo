#include <stdio.h>

int main (){
   printf("Desafio Super Trunfo \n");

   int Populacao, PontosTuristicos;
   char NomeCidade[25];
   char Codigo[25];
   char Estado;
   float Area, PIB;

   printf("Carta 1 \n");
   printf("Digite o estado: \n");
   scanf("%s", &Estado);
   
   printf("Digite o código: \n");
   scanf("%s", Codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s", NomeCidade);

   printf("Digite a população: \n");
   scanf("%d", &Populacao);

   printf("Digite a Área(km²): \n");
   scanf("%f", &Area);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);

   printf("Carta 1 \n");
   printf("Estado: %s\n", Estado);
   printf("Código: %s\n", Codigo);
   printf("Nome da cidade: %s\n", NomeCidade);
   printf("População: %d\n", Populacao);
   printf("Área: %d\n", Area);
   printf("PIB: %.2f\n", PIB);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos);

   return 0;



}