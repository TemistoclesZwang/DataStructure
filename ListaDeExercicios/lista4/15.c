//Leia uma matriz quadrada de ordem N, determine e escreva o ma e o me elemento da matriz esuas respectivas posições (linha, coluna)

#include <stdio.h>
#include <stdlib.h>
#define n 5


void main()
{

   int i; 

   int ma;
   int me;
   int posicaoMa;
   int posicaoMe;
   int vetor[n];


   for (i = 0; i < n; i++)
   {
      printf("\nvetor[%i]\nInsira um novo elemento: ", i);
      scanf("%i", &vetor[i]);
   }
   ma = vetor[0];
   me = vetor[0];
   posicaoMa = 0;
   posicaoMe = 0;
   for (i = 1; i < n; i++)
   {
      if (vetor[i] > ma)
      {
         ma = vetor[i];
         posicaoMa = i;
      }
      else
      {
         if (vetor[i] > me)
         {
            me = vetor[i];
            posicaoMe = i;
         }
      }
   }
   printf("Maior: %i Posicao: %i \n", ma, posicaoMa);
   printf("Menor: %i Posicao: %i ", me, posicaoMe);
   // printf("\n\n");
   // system("pause");
}