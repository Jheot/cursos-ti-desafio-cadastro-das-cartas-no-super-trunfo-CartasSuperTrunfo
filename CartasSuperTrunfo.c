#include <stdio.h>

int main (){
   printf("Desafio Super Trunfo \n");

   int Populacao, PontosTuristicos;
   char NomeCidade[50], Codigo[50];
   char Estado;
   float Area, PIB;

   printf("Carta 1 \n");
   printf("Digite o estado: \n");
   scanf("%s", &Estado);
   
   printf("Digite o código: \n");
   scanf("%s", &Codigo[0]);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &NomeCidade);

   printf("Digite a população: \n");
   scanf("%d", &Populacao);

   printf("Digite a Área(km²): \n");
   scanf("%.2f", &Area);

   printf("Digite o PIB: \n");
   scanf("%.2f", &PIB);

   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);

   return 0;a
}