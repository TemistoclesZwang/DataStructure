
//Leia um vetorcom N números, calcule e escreva a soma e a media dos números lidos


#include <stdio.h>
   
   
   void main(){
   //para gerar um vetor do mesmo tamanho do input do usuário
   printf("\nInsira quantas elementos quer:");
   int quantidade,j,i;
   int calc = 0;
   scanf("%i",&quantidade);
   int vetorA[quantidade];
   

   // para colocar cada item que o usuário digitar dentro do array
   for (i = 0; i < quantidade; i++)
   {
      
      printf("Insira o valor %i do vetor A : \n",i);
      scanf("%i",&vetorA[i]);
      
   }
   for (j = 0; j < quantidade; j++)
   {
      calc += vetorA[j];
   }
   int media = calc / quantidade;
   
   printf("Valor da soma:%i\nValor da média:%i\n",calc,media);
   }