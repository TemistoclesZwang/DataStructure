	#include <stdio.h>
	#include <math.h>
   
   
   void main(){
   int N;
   printf("Insirao valor de N \n");
   scanf("%i",&N);
   
   int calc_A;

   int i;
   for (i = 0; i < N; i++)
   {
      int calc = pow(i,2);
      if (calc < N + 1)
      {
         calc_A = calc;
      }else
      {
         printf("Resultado: %i\n",calc_A);
         break;
      }
      
      
   }
   

   }