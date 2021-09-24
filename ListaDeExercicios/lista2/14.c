//Determine a idade de uma pessoa, em anos, meses e dias, dadas a data (dia, mês e ano) do seu nascimento e a data (dia, mês e ano) atual.


	#include <stdio.h>
	#include <time.h>
   
   
   void main(){
   int dia, mes, ano;
   printf("Insira o dia mês e ano de seu nascimento: \n");
   scanf("%i %i %i",&dia,&mes,&ano);
   
   time_t t = time(NULL);
   struct tm tm = *localtime(&t);

   int ano_at = tm.tm_year + 1900; 
   int mes_at = tm.tm_mon + 1; 
   int dia_at = tm.tm_mday;

   int A = 2020 - ano;
   int resto_A =(dia_at >= dia && mes_at > mes)?1:0;
   int idade = A + resto_A;

   int M = 12 - mes;

   int D = 30 - dia;

   printf("Você tem: %i anos %i M %i D \n",idade,M,D);
   }