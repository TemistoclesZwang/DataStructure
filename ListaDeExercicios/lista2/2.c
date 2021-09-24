//Leia 3 (três) números, verifique e escreva o maior entre os números lidos

	#include <stdio.h>
   
   
   void main(){
   int n1;
   printf("Insira o número 1: \n");
   scanf("%i",&n1);   
   
   int n2;
   printf("Insira o número 2: \n");
   scanf("%i",&n2);

   int n3;
   printf("Insira o número 3: \n");
   scanf("%i",&n3);

   int maior1 = (n1>n2)?n1:n2;
   int maior2 = (n2>n3)?n2:n3;

   if (maior1 > maior2)
   {
   printf("O maior número é: %i\n",maior1);
   
   }else{
      printf("O maior número é: %i\n",maior2);

   }
   
   }