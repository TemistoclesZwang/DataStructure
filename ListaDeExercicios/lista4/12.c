#include <stdio.h>
#define n 10

main()
{
   //entrada
   int i, j;
   int matriz[n][n];

   // gera matriz
   for (i = 0; i < n; i++)
   { // linha
      for (j = 0; j < n; j++)
      {              // coluna
         if (i == j) // toda vez que linha e coluna são iguais representa a diagonal principal
         {
            matriz[i][j] = 1;
         }
         else
         {
            matriz[i][j] = 0;
         }
      }
   }

   // saida
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("%3i ", matriz[i][j]); // print para exibir a matriz
      }
      printf("\n");
   }
}
