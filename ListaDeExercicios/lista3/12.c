#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
   int partidas;
   printf("Insira a quantidade de partidas: \n");
   scanf("%i", &partidas);
   srand(time(NULL));

   int i;
   int pontos_j1 = 0;
   int pontos_j2 = 0;


   for (i = 1; i <= partidas; i++)
   {

      pontos_j1 += 1 + (rand() % 20);
      pontos_j2 += 1 + (rand() % 20);

      printf("Partida número: %i\n", i);
      printf("Jogador 1 pontos: %i\n",pontos_j1);
      printf("Jogador 2 pontos: %i\n",pontos_j2);
      printf("----------------------------------------\n");

   if (pontos_j1 >= 21 && pontos_j1 - pontos_j2 >= 2)
   {
      printf("Jogador 1 é o campeão !");
      break;

   }else if (pontos_j2 >= 21 && pontos_j2 - pontos_j1 >= 2)
   {
      printf("Jogador 2 é o campeão !");
      break;
   }
   
   }
      
}
