//Leia uma matriz quadrada de ordem N, calcule e escreva a soma dos  elementos  da diagonal principal,a soma dos elementos da diagonal secundária e a soma dos elementos que não estão na diagonalprincipal nem na diagonal secundária

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <math.h>
#define n 3

main()
{
   int i, j;
   int matriz[n][n];
   int soma_secundaria = 0;
   int soma_principal = 0;
   int soma_total = 0;

   for (i = 0; i < n; i++)
   { // linha
      for (j = 0; j < n; j++)
      { // coluna
         printf("Matriz [%i][%i].........: ", i, j);
         scanf("%i", &matriz[i][j]);

   if (i + j == n-1) //para somar diagonal secundaria
   {
      soma_secundaria += matriz[i][j];
   }else if (i == j)
   {
      soma_principal += matriz[i][j];
   }else if (i + j != n-1 && i!=j)
   {
      soma_total += matriz[i][j];
   }


      
      }
   }
   

   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         // printf("%i ", matriz[i][j] + matriz[i][j]);
         //dobrando todos os valores para confimar como resolver
         printf("%3i ", matriz[i][j]);
      }
      printf("\n");
   }
   printf("Resultado soma diagonal principal: %i\n",soma_principal);
   printf("Resultado soma diagonal secundária: %i\n",soma_secundaria);
   printf("Resultado soma dos demais números: %i\n",soma_total);
}
