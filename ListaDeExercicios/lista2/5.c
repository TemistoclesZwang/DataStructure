//Leia data atual (dia, mês e ano) e data de nascimento (dia, mês e ano) de uma pessoa, calcule e escreva sua idade exata (em anos).

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

   printf("Você tem: %i anos \n",idade);
   }
