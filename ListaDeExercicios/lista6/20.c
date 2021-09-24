#include <stdio.h>

// int fatorial;
int numero;
int calc = 0;

int gerarSoma(int numero)
{

   for (int i = 1; i <= numero; i++)
   {
      calc = i + calc;
   }

   return (calc);
}

void main()
{
   printf("Insira o número desejado: \n");
   scanf("%i", &numero);
   printf("\nSoma: %i\n", gerarSoma(numero));
}