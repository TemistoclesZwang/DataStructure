#include <stdio.h>

void main()
{
   int N, ls, li;
   printf("Insira o valor de N, limite superior e limite inferior \n");
   scanf("%i %i %i", &N, &li, &ls);

   for (li; li <= ls; li++)
   {
      if (li % N == 0)
      {
         printf("Múltiplo: %i\n", li);
      }
   }
}