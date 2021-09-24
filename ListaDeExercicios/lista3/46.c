#include <stdio.h>

void main()
{
   int N;
   printf("\nInsira o valor de N:");
   scanf("%i", &N);

   int i;
   int resultado = 0;

   for (i = 1; i <= N; i++)
   {
      resultado += i;
      
      printf("%i\n",resultado);
   }
}