//Leia uma data (dia, mês e ano), verifique e escreva se a data é ou não válida.

#include <stdio.h>
#include <time.h>

void main()
{
   int dia, mes, ano;
   printf("Insira o dia mês e ano: \n");
   scanf("%i %i %i", &dia, &mes, &ano);

   time_t t = time(NULL);
   struct tm tm = *localtime(&t);
   int ano_at = tm.tm_year + 1900;

   int validacao_dia = (dia > 30 || dia == 0) ? 1 : 0;
   int validacao_mes = (mes > 12 || mes == 0) ? 1 : 0;
   int validacao_ano = (ano < 1900 || ano > ano_at || ano == 0) ? 1 : 0;

   if (validacao_dia && validacao_mes && validacao_ano == 0)
   {
   printf("Data válida \n");
      
   }
   else
   {
   printf("Data inválida \n");
      
   }
   
   
}