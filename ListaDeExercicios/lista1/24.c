//Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.

	#include <stdio.h>
   
   
   void main(){
   int anos;
   printf("Insira quantos anos você tem: \n");
   scanf("%i",&anos);

   int calc = 365 * anos;
   
   printf("Quantidade de dias: %i\n",calc);
   
   }