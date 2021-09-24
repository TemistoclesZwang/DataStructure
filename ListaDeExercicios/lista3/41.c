#include <stdio.h>

void main()
{
   int ls, li;
   printf("Insirao limite superior e limite inferior: \n");
   scanf("%i %i", &li, &ls);

   for (li; li < ls; li++)
   {
      if (li % 2 != 0)
      {
         printf("%i\n", li);
      }
   }
}
