	#include <stdio.h>
   
   
   void main(){
   int X;
   printf("Insira um valor: \n");
   scanf("%i",&X);

   int i;
   int j;

   for (i = 0, j = 1; i+j <= X; i++,j++)
   {
      int calc = i + j;
      printf("Número da lista: %i + %i = %i\n",i,j,calc);
   }
   
   
   }