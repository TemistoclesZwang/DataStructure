//Leia N e uma lista de N números e escreva o maior número da lista.

#include <stdio.h>

void main()
{
   int N;
   printf("Quantos itens terá na lista?: \n");
   scanf("%i", &N);
   
   int notas[N];
   int i;
   for (i = 0; i < N; i++)
   {
   printf("Digite o valor%i: \n",i);
   scanf("%i", &notas[i]);
   }
   int j;
   for (j = 0; j < N; j++)
   {
      
   printf("O maior número entre %i: %i\n",j,notas[j]);


   }
   
   // como comparar cada número da lista?
}

//https://www.youtube.com/watch?v=hDBRQuhTyTk