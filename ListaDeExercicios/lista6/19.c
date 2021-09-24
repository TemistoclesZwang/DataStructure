#include<stdio.h>

int fatorial;
int numero;

int gerarFatorial(int numero)
{

   for(fatorial = 1; numero > 1; numero = numero - 1)
   {
         fatorial = fatorial * numero;
   }
   
   return (fatorial);

}

void main()
{
   printf("Insira o número desejado: \n");
   scanf("%i", &numero);
   printf("\nFatorial: %i\n", gerarFatorial(numero));

}