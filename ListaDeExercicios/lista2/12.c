//Leia 2 datas (dia, mês e ano) e escreva qual delas é a mais recente

	#include <stdio.h>
   
   
   void main(){
   int dia1,mes1,ano1;
   printf("Insira o dia mês e ano: \n");
   scanf("%i %i %i",&dia1,&mes1,&ano1);
   
   int dia2,mes2,ano2;
   printf("Insira o dia mês e ano: \n");
   scanf("%i %i %i",&dia2,&mes2,&ano2);

   
   int dia_recente = (dia1 > dia2)?dia1:dia2;
   int mes_recente = (mes1 > mes2)?mes1:mes2;
   int ano_recente = (ano1 > ano2)?ano1:ano2;

   
   printf("Data mais recente: %i/%i/%i\n",dia_recente,mes_recente,ano_recente);    
   }