#include <stdio.h>

void main()
{
   int li, ls;
   printf("Insira o valor do limite inferior e limite superior \n");
   scanf(" %i %i", &li, &ls);
   int i;

   for (li; li <= ls; li++)
   {
      if (li % 2 == 1)
      {
         printf("%i é primo \n", li);
      }
   }
}
