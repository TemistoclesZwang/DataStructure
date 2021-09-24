#include <stdio.h>

main()
{
   int base;
   int altura;

   printf("Insira o valor da base: ");
   scanf("%i", &base);
   printf("Insira o valor da altura: ");
   scanf("%i", &altura);

   int calculo = (base * altura) / 2;

   printf("A área é: %i\n", calculo);

}