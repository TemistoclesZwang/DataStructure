#include <stdio.h>

void main (){
   //Entrada
   int n = 3;
   int vetor[n];

   for (int i = 0; i < n; i++)
   {
      printf("\nvetor[%i]\nInsira um novo elemento: ", i);
      scanf("%i", &vetor[i]);
   
   // Ordenar
   }
   int temp = 0;
   for (int Y = 0; Y < n; Y++)
   {
      for (int X = 0; X < n; X++)
      {
         if (vetor[Y] > vetor[X])
         {
            temp = vetor[Y];
            vetor[Y] = vetor[X];
            vetor[X] = temp;
         }
         
      }
      
   }
   //saida
   for (int i = n-1; i >= 0; i--) // para ordenar em ordem crescente basta usar i++ no lugar
   {
   
   printf("%i\n",vetor[i]);

}

}