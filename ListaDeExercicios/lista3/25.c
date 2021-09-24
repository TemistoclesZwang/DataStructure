#include <stdio.h>
#include <time.h>

void main()
{
   int canal = 1;
   float populacao = 10.000;

   while (canal != 0)
   {
      printf("Insira um canal (2,4,5,7,10): \n");
      scanf("%i", &canal);

      if (canal == 0)
      {
         break;
      }

      float pessoas_assistindo = aleatorio();
      float percentual = (populacao / 100) * pessoas_assistindo;

      printf("Pessoas assistindo o canal %i: %i\n", canal, pessoas_assistindo);
      printf("Porcentagem audiência: %0.2f%\n", percentual);
   }
}

int aleatorio()
{
   srand(time(NULL));
   int pessoas_assistindo = 1 + (rand() % 1000);
   return pessoas_assistindo;
}