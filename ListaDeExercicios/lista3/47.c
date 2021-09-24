	#include <stdio.h>
   
   
   void main(){
   int N;
   printf("\n Insira o valor de N:");
   scanf("%i",&N);
   
   int qtd_atual = 2;
   int anterior = 0;
   int acumulador = 1;

   int i;
   for (i = 0; i < N; i++)
   {
      int novo_atual = anterior + acumulador;
      anterior = acumulador;
      acumulador = novo_atual;

      printf("%i\n",acumulador);
      qtd_atual += 1;
   }
   
   }