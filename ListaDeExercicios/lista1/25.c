//Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias

	#include <stdio.h>
   
   
   void main(){
   int idade;
   printf("Insira sua idade em dias: ");
   scanf("%i", &idade);

   int calculo =  idade / 365;
   int calculo_m = idade / 30;
   int calculo_d = idade % 30;
   printf("%i dias  %i anos  %i meses \n", calculo_d,calculo_m,calculo);
   

   }