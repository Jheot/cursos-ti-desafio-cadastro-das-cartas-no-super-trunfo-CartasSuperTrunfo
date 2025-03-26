#include <stdio.h>

int main (){
   printf("Desafio Super Trunfo \n");

   int PontosTuristicos;
   char NomeCidade[20];
   char Codigo[3];
   char Estado[25];
   float Area;
   float PIB;
   float Populacao;
   float Densidade;

   printf("Carta 1\n");
   printf("Digite o estado:\n");
   scanf("%c", &Estado); //%c utilizado pois ''char Estado'' possui apenas 1 caractere
   
   printf("Digite o código:\n");
   scanf("%s", Codigo);

   printf("Digite o nome da cidade:\n");
   scanf("%s", NomeCidade);

   printf("Digite a população:\n");
   scanf("%f", &Populacao);

   printf("Digite a Área(km²):\n");
   scanf("%f", &Area);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &PontosTuristicos);

   printf("Carta 1\n");
   printf("Estado: %c\n", Estado);
   printf("Código: %s\n", Codigo);
   printf("Nome da cidade: %s\n", NomeCidade);
   printf("População: %2.f\n", Populacao);
   printf("Área: %.2f (km²)\n", Area);
   printf("PIB: %.2f\n", PIB);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos);

   printf("\n");

   printf("Carta 2\n");
   printf("Digite o estado:\n");
   scanf(" %c", &Estado); // Caractere de ''Espaço'' adicionado antes do "%c" para o scanf ignorar o ''printf("\n")'' acima, feito para melhor visualização do código
   
   printf("Digite o código:\n");
   scanf("%s", Codigo);

   printf("Digite o nome da cidade:\n");
   scanf("%s", NomeCidade);

   printf("Digite a população:\n");
   scanf("%d", &Populacao);

   printf("Digite a Área(km²):\n");
   scanf("%f", &Area);

   printf("Digite o PIB:\n");
   scanf("%f", &PIB);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &PontosTuristicos);

   printf("Carta 2\n");
   printf("Estado: %c\n", Estado);
   printf("Código: %s\n", Codigo);
   printf("Nome da cidade: %s\n", NomeCidade);
   printf("População: %d\n", Populacao);
   printf("Área: %.2f (km²)\n", Area); // por conta das restrições atribuidas a esta atividade, o resultado de printf("Área: %.2f...") irá exibir, EX: Área 123456.00 (km²) ao invés de 1234.56 (km²)  
   printf("PIB: %.2f\n", PIB);
   printf("Número de pontos turísticos: %d\n", PontosTuristicos);
   
    if 




   return 0;

}