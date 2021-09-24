
#include <stdio.h>

void main()
{
   int N;
   printf("Insira o valor de N:\n");
   scanf("%i", &N);

   int i;
   int j;

   for (i = 1, j = 2; i < N; i++, j++)
   {

      int calc = i + j;
      printf("%i + %i = %i\n", i, j, calc);
   }
}