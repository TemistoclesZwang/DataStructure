#include <stdio.h>
#include <math.h>

void main()
{
   int numero;
   printf("Insira um número \n");
   scanf("%i", &numero);

   int r = ceil(log10(numero + 1));
   printf("Resultado: %i dígitos\n", r);
}

