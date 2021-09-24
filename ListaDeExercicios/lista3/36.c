#include <stdio.h>

void main()
{
   int N;
   printf("Insira o número \n");
   scanf("%i", &N);

   int fat = 1;
   int i = 2;

   while (i <= N)
   {
      fat = fat * i;
      i++;
      printf("%i\n", fat);
   }
}