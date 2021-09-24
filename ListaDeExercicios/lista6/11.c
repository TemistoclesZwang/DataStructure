#include<stdio.h>

int fatorial;
int numero;

void main()
{
   
   printf("Insira o número desejado: \n");
   scanf("%i", &numero) ;

   for(fatorial = 1; numero > 1; numero = numero - 1)
   {
         fatorial = fatorial * numero;
   }
   
   printf("\nFatorial: %i\n", fatorial);

}