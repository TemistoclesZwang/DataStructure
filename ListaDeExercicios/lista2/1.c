// Leia 2 (dois) números, verifique e escreva o menor e o maior entre os números lidos.

	#include <stdio.h>
   
   
   void main(){
   int n1;
   printf("Insira o número 1: \n");
   scanf("%i",&n1);   
   
   int n2;
   printf("Insira o número 2: \n");
   scanf("%i",&n2);

   if (n1 > n2)
   {
      printf("O maior número é: %i\n",n1);
   }else{
      printf("O maior número é: %i\n",n2);
   }
   
   
   }