#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int n_bois;
   printf("Quantos bois quer verificar?(0 para sair) \n");
   scanf("%i", &n_bois);

   int i;
   int peso_boi = 0;
   srand(time(NULL));
   while (strcmp(n_bois, 0) != 0)
   {
   
   for (i = 1; i <= n_bois; i++)
   {
      int aleatori = rand() % 1000;

      printf("Boi %i: Peso: %i\n", i, aleatori);
      if (aleatori > peso_boi)
      {
         peso_boi = aleatori;
      }
   }
   printf("\nMais pesado %i\n", peso_boi);

   }
}

