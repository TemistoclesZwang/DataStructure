//Leia um valor em km, calcule e escreva o equivalente em m.

#include <stdio.h>

main()
{
   int km;

   printf("Insira o valor do km: ");
   scanf("%i", &km);

   int calculo = km * 1000;
   printf("O resultado é: %i\n ",calculo);

}
