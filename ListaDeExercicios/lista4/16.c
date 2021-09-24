//16. Leia uma matriz quadrada de ordem N e escreva se ela é ou não simétrica. Uma matriz quadrada é ditasimétrica se A[i,j] = A[j,i]

#include <stdio.h>
#define n 2

main()
{
   //entrada
   int i, j;
   int matriz[n][n];
   int contarSimetria = 0;

   // gera matriz
   for (i = 0; i < n; i++)
   { // linha
      for (j = 0; j < n; j++)
      { // coluna
         printf("Posição do item [%i][%i]: ", i, j);
         scanf("%i", &matriz[i][j]);

         //verifica lado esquerdo
         if (matriz[i][j] == matriz[j][i])
         {                       // se todos os n de uma linha e coluna forem iguais a todos os n da mesma linha e coluna invertida, então a matriz é simétrica
            contarSimetria ++; // isso deve acontecer 3 vezes de um lado e 3 vezes do outro = 6
         }
         //verifica lado direito
         if (matriz[i][n - 1] == matriz[n - 1][j]) //n - 1 para chegar ao último indice da matriz
         {
            contarSimetria ++; // isso deve acontecer 3 vezes de um lado e 3 vezes do outro = 6
         }
      }
   }
   // saida
   // se a contaSimetria for igual ao dobro de n então é simetrica
   if (contarSimetria == n * 2)
   {
      
      printf("É simétrica \n");
   }
   else
   {
      printf("Não é simétrica \n");

   }
   
   
}
