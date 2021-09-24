	#include <stdio.h>
   
   
   void main(){
   int valor_mercadoria;
   printf("Insira o valor da mercadoria: \n");
   scanf("%int",&valor_mercadoria);
   
   float entrada = valor_mercadoria % 3;
   float prestacoes = valor_mercadoria / 3;

   float final = entrada + prestacoes;
   printf("A entrada será %0.2f e as prestações %0.2f", final, prestacoes);


   }