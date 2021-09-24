
#include <stdio.h>

void main()
{
   int esquerda;
   int direita;

   for (esquerda = 1; esquerda <= 10; esquerda++)
   {
      for (direita = 1; direita <= 10; direita++)
      {
         int calc = direita * esquerda;
         printf("%i X %i = %i\n", esquerda, direita, calc);
      }
      printf("______________");
   }
}