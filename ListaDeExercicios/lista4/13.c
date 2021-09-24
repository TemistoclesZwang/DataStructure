#include <stdio.h>
#define n 2

main()
{
   //entrada
   int i, j;
   int matriz[n][n];
   int contarSimetria = 0;

   int positivos = 0;
   int negativos = 0;

   // gera matriz
   for (i = 0; i < n; i++)
   { // linha
      for (j = 0; j < n; j++)
      { // coluna
         printf("Posição do item [%i][%i]: ", i, j);
         scanf("%i", &matriz[i][j]);

         if (matriz[i][j] > 0)
         {
            positivos += matriz[i][j];
         }
         else if (matriz[i][j] < 0)
         {
            negativos += matriz[i][j];
         }
      }
   }

   // saida
   
   printf("Resutlado calculo positivos: %i\n",positivos);
   printf("Resutlado calculo negativos: %i\n",negativos);
}
