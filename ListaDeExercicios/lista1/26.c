//Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o nº de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20cigarros).


	#include <stdio.h>
   
   
   void main(){

   int anos;
   printf("Qual o número de anos que fuma?");
   scanf("%i",&anos);   
   
   int cigarros;
   printf("Qual o número de cigarros que fuma por dia?");
   scanf("%i",&cigarros);   
   
   float preco;
   printf("Qual o preço da carteira?");
   scanf("%i",&anos);

   int dia = (preco / 20) + cigarros;
   int mes = dia * 30;
   int gasto_anos = mes * (anos * 12);
   
   printf(" gasto dia: %i\n gasto mês: %i\n gasto ano: %i\n",dia,mes,gasto_anos );
   }