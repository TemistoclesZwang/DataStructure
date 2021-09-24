// //Leia um vetorA com N elementos e escreva um vetorB comN elementos, 
// conforme a seguinte condição:se índice de A[índice] é par então B[índice] = 0, 
// caso contrário B[índice] = 1
   #include <stdio.h>


   void main(){
   int quantidade;
   printf("\nInsira quantas elementos quer:");
   scanf("%i",&quantidade);
   
   int vetorA[quantidade];
   int vetorB[quantidade];

   int i;
   for (i = 0; i < quantidade; i++)
   {
      printf("Insira o valor %i do vetor A : \n",i);
      scanf("%i",&vetorA[i]);

      if (vetorA[i]%2 == 0)
      {
         vetorB[i] = 0;
         // printf("P%i",vetorA[i]);
      }else
      {
         vetorB[i] = 1;

      }
      
      
   }
   }