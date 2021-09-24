//Leia um  vetorcom  N  elementos,  encontre  e  escreva  o  maior  e  o  menor  elemento  e  suas  respectivasposições novetor

#include <stdio.h>

int main()
{

   int tamanho, i, inc;

   printf("\n Quantos elementos vai usar ?: ");
   scanf("%d", &tamanho);
   int array[tamanho];

   printf("\n Insira os %i elementos: \n", tamanho);

   for (i = 0; i < tamanho; i++)
   {
      scanf("%i", &array[i]);
   }

   inc = array[0];

   for (i = 1; i < tamanho; i++)
   {
      if (inc < array[i])
         inc = array[i];
   }

   printf("\n O maior elmento é: %i", inc);

}
