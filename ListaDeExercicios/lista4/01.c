//Leia um vetorA com N elementos e escreva um vetorB, com os mesmos elementos de A, 
// sendo queestes deverão  estar invertidos, 
// ou seja, o 1º elemento  de  A deve ser o último  elemento de  B;
//  o 2ºelemento de  A deve ser o penúltimo elemento de B e assim por diante.

   #include <stdio.h>
   
   
   void main(){
   //para gerar um vetor do mesmo tamanho do input do usuário
   int quantidade;
   printf("\nInsira quantas notas que analisar:");
   scanf("%i",&quantidade);
   
   float notas[quantidade];
   // para colocar cada item que o usuário digitar dentro do array
   int i;
   for (i = 0; i < quantidade; i++)
   {
      
      printf("Insira o valor da nota %i: \n",i);
      scanf("%f",&notas[i]);
      
   }
   //para imprimir cada item do array
   int j;
   for (j = quantidade - 1; j >= 0; j--)
   {
      printf("Notas: %0.2ff\n",notas[j]);
   }
   
   }