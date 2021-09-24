//for e array

#include <stdio.h>

void main()
{

   int i;
   float notas[5] = {7, 8, 9.5, 9.9, 5.2};
   
   printf("Exibindo os Valores do Vetor \n\n");
   
   for( i = 0 ; i <= 4; i++) // i < 4 pois o array tem 5 itens começando em 0
   {
   printf("notas[%i] = %.1f\n",i, notas[i]);
   }

}

// for (condição,enquanto isso ocorrer,faça isso){}
