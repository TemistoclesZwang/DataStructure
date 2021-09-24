//Leia uma matriz quadrada de ordem N, calcule e escreva sua matriz transposta

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <math.h>
#define n 3 

main()
{
   int i, j;
   int matriz[n][n];

   for (i = 0; i < n; i++)
   { // linha
      for (j = 0; j < n; j++)
      { // coluna
         printf("Posição do item [%i][%i]: ", i, j);
         scanf("%i", &matriz[i][j]);
      }
   }
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("%3i ", matriz[i][j]); // print para exibir a matriz
      }
      printf("\n");
   }


   printf("\nTransposição:\n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("%i ", matriz[j][i]);// inverte a ordem
         i*2; //usar a posição * 2 para fazer a transposiçãõ
      }
      printf("\n");
   }

   printf("\n\n");
   system("pause");
}



// 00 10 20 i tá adiantado (+1) a frente do j. J sempre repete
// 01 11 21 i tá adiantado (+1) a frente do j. J sempre repete
// 02 12 22 i tá adiantado (+1) a frente do j. J sempre repete
// 03 13 23 i tá adiantado (+1) a frente do j. J sempre repete
