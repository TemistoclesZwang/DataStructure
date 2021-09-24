	#include <stdio.h>
   
   
   void main(){
   int n;
   printf("Insira um número: \n");
   scanf("%i",&n);
   
   float calc = n / 2;


   while (calc >= 1)
   {
      calc = calc / 2;
   }
   printf("Resultado: %0.2f \n",calc);
   
   
   }