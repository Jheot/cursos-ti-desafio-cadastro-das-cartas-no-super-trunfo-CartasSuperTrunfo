#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
   printf("Desafio Super Trunfo \n"); // Não utilizar acentuações como ',' ou '.' para evitar problemas

   int PontosTuristicos1, PontosTuristicos2;
   int ResultadoPop, ResultadoArea, ResultadoPIB, ResultadoPT, ResultadoDP, ResultadoPerC, ResultadoSP;
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
    printf("População: %lu\n", Populacao2);
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
    printf("Carta 1 tem o PIB per Capita maior\n");
  }else{
    printf("Carta 2 tem o PIB per Capita maior\n");
  }

  SuperPoder1 = (float) (Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PerCapita1 + Densidade1);
    printf ("O Super Poder da carta 1 equivale a: %.2f\n",SuperPoder1);

  SuperPoder2 = (float) (Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PerCapita2 + Densidade2);
    printf ("O Super Poder da carta 2 equivale a: %.2f\n",SuperPoder2);

    printf("***Quem é o vencedor?***\n"); //1 para CARTA1 0 para CARTA2
    printf("(1 significa carta 1, e 0 significa carta 2)\n");
  
    ResultadoPop = (Populacao1 > Populacao2); //Simulando o resultado
    ResultadoArea = (Area1 > Area2);
    ResultadoPIB = (PIB1 > PIB2);
    ResultadoPT = (PontosTuristicos1 > PontosTuristicos2);
    ResultadoDP = (Densidade1 < Densidade2);
    ResultadoPerC = (PerCapita1 > PerCapita2);
    ResultadoSP = (SuperPoder1 > SuperPoder2);
  
    printf("População: %d\n", ResultadoPop);
    printf("Área: %d\n", ResultadoArea);
    printf("PIB: %d\n", ResultadoPIB);
    printf("Pontos Turísticos: %d\n", ResultadoPT);
    printf("Densidade Populacional: %d\n", ResultadoDP);
    printf("PIB per capita: %d\n", ResultadoPerC);
    printf("Super Poder: %d\n", ResultadoSP);

int escolhaJogador, escolhaMaquina;

  printf("***Escolha um atributo para batalhar***\n");
  printf("%d", NomeCidade1);
  printf("1. População");
  printf("2. Área");
  printf("3. PIB");
  printf("4. Número de pontos turísticos");
  printf("5. Densidade demográfica");
  scanf("%d", escolhaJogador);

do {switch (escolhaJogador) {
  case 1:
    escolhaJogador == Populacao1;
    escolhaMaquina == Populacao2;
    break;
  case 2:
    escolhaJogador == Area1;
    escolhaMaquina == Area2;
    break;
  case 3:
    escolhaJogador == PIB1;
    escolhaMaquina == PIB2;
    break;
  case 4:
    escolhaJogador == PontosTuristicos1;
    escolhaMaquina == PontosTuristicos2;
    break;
  case 5:
    escolhaJogador == Densidade1;
    escolhaMaquina == Densidade2;
    break;
  default:
    printf("%d não é válido, tente novamente", escolhaJogador);
    break;
}
}while (escolhaJogador >= 1 && escolhaJogador <= 5);

  if ("%d" == "%d", escolhaJogador, escolhaMaquina){
    printf("***Empate***");
  } else if ("%d" > "%d", escolhaJogador, escolhaMaquina){
    printf("***Jogador Venceu!***");
  } else {
    printf("***Computador venceu!***");
  }








  return 0;
}