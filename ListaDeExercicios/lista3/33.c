	#include <stdio.h>
   
   
   void main(){
   int N;
   printf("Insira o valor de N\n");
   scanf("%i",&N);

   int i;

   for (i = 1; i <= N; i++)
   {
   int divisao = i/2;
   if (i == divisao*2){
      printf("Valores: %i\n",i);
   }
   }
   

   }