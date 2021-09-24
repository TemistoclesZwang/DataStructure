//Leia um valor em kg(quilograma), calcule e escreva o equivalente em g(grama)

#include <stdio.h>

main()
{
   int kg;

   printf("Insira o valor do kg: ");
   scanf("%i", &kg);

   int calculo = kg * 1000;
   printf("O resultado é: %i\n ",calculo);

}
