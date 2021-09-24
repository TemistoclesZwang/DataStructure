#include <stdio.h>

void main()
{
   int N;
   printf("\nInsira o valor de N:");
   scanf("%i", &N);

   int i;
   int todos_numeros;

   for (i = 1; i <= N; i++)
   {
      todos_numeros += i;
      int calc = i + (i+1);
      printf("Numero da lista%i: \n%i + %i = %i\n",i,i,i+1,calc);
   }
   int media = todos_numeros / N;
   printf("Média: %i\n",media);
}