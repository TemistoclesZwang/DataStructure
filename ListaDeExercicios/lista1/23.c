//Leia 3 números, calcule e escreva a média dos números.

#include <stdio.h>

main()
{
   int n1;
   int n2;
   int n3;

   printf("Insira o número 1:");
   scanf("%i", &n1);
   printf("Insira o número 2:");
   scanf("%i", &n2);
   printf("Insira o número 3:");
   scanf("%i", &n3);

   int calculo = (n1 + n2 + n3) / 3;
   printf("A média é: %i\n", calculo);
}